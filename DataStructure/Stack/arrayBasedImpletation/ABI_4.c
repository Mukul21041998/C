#include<stdio.h>

int a[100];

int top;
int size;

void Push(int x)
{
  if(top == size-1)
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

void print(int i)
{


    while(i!=0)
    {
      printf("%d",a[i]);
      i--;
    }
    if(i==0)
    {
      printf("%d",a[i]);
    }
      printf("\n");

}

void printPop()
{
  int i;
  for(i=top;i>=0;i--)
  {
    printf("%d",a[i]);
  }
  printf("\n");
}

int main()
{
  top=-1;
  int n,i,value;
  printf("Enter the size of stack\n");
  scanf("%d",&size);
  printf("Enter the number of elements to push\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the value \n");
    scanf("%d",&value);
    Push(value);
  }
  for(i=0;i<n;i++)
  {
    print(i);
  }

  printf("Enter the number of pop\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    Pop();
    printPop();
  }




}
