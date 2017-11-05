#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define max 100
int top=-1;
char stk[max];

void push(char word)
{
  if(top==(max-1))
  {
    printf("overflow\n");
  }

  else
  {
    top++;
    stk[top]=word;
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
  }
}

void display()
{
  char a[100];

  printf("%c",stk[top]);
}


int main()
{
  int i;
  char word[max];
  printf("Enter the word \n");
  gets(word);
  for(i=0;i<strlen(word);i++)
  {
    push(word[i]);
  }

  for(i=0;i<strlen(word);i++)
  {
    if(i!=0)
    {
        pop();
    }

    display();

  }

}
