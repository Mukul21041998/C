#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 50
int top=-1;
char stk[max];
char temp;

char push(char exp)
{
  if(top==(max-1))
  {
    printf("overflow");
  }

  else
  {
    top++;
    stk[top]=exp;
    temp=stk[top];
  }
}

void pop()
{
  if(top==-1)
  {
    printf("underflow");
  }

  else
  {

      top--;
      temp=stk[top];

  }
}

int match(char a,char b)
{
	if(a=='[' && b==']')
	{
    pop();
  }
	if(a=='{' && b=='}')
	{
    pop();
  }
	if(a=='(' && b==')')
	{
    pop();
  }



}

int main()
{
  int i;
  char exp[max];
  printf("Enter the expression\n");
  gets(exp);
  for(i=0;i<strlen(exp);i++)
  {
    if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
    {
      push(exp[i]);
    }
    else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
    {
      if(top==-1)
      {
        printf("invalid expression\n");
        exit(0);
      }
      else
      {
        match(temp,exp[i]);

      }
    }
  }
  if(top==-1)
  {
    printf("valid expression");
  }

  else
  {
    printf("invalid expression");
  }
}
