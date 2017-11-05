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
    c=a/b;
  }
  if(operator=='*')
  {
    c=a*b;
  }
  if(operator=='+')
  {
    c=a+b;
  }
  if(operator=='-')
  {
    c=a-b;
  }
  stk[top]=c;

}

int main()
{
  char exp[max];
  int i,len;
  printf("Enter the prefix expression\n");
  gets(exp);
  for(i=(strlen(exp)-1);i>=0;i--)
  {
    if(exp[i]==' ')
    {
      printf("please do not use the space between expression\n");
      return;
    }

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
