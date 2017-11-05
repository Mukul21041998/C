#include<stdio.h>

#define MAX_SIZE 101
int a[MAX_SIZE];

int top=-1;

void Push(int x)
{
  if(top == MAX_SIZE-1)
  {
    printf("overflow");
  }

  else
  {
    top++;
    a[top]=x;
  }
}

void Pop()
{
  if(top==-1)
  {
    printf("underflow\n");
  }

  else
  {
    top--;
  }
}

void print()
{
  int i;
  for(i=0;i<=top;i++)
  {
    printf("%d",a[i]);
  }
  printf("\n");
}

int main()
{
  Push(2);print();
  Push(3);print();
  Push(4);print();
  Push(5);print();
  Pop();print();

}
