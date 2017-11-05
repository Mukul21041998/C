#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 100
int top=-1;
int stk[max];

void push(int operand)
{
  if(top==(max-1))
  {
    printf("overflow\n");
  }
  else
  {
    operand=operand-48;
    top++;
    stk[top]=operand;
  }
}

void pop(char operator)
{
  int a,b,c;
  a=stk[top];
  top--;
  b=stk[top];
  if(operator=='/')
  {
    c=b/a;
  }
  if(operator=='*')
  {
    c=b*a;
  }
  if(operator=='+')
  {
    c=b+a;
  }
  if(operator=='-')
  {
    c=b-a;
  }
  stk[top]=c;

}

int main()
{
  char exp[max];
  int i;
  printf("Enter the postfix expression\n");
  gets(exp);
  for(i=0;i<strlen(exp);i++)
  {



    if(exp[i]=='+'|| exp[i]=='-'||exp[i]=='*'||exp[i]=='/')
    {
        pop(exp[i]);
    }

    else
    {
      push(exp[i]);
    }
  }
    printf("%d",stk[top]);
}
