#include<stdio.h>

#define max 100

int front=-1;
int rear=-1;
int queue;
int a[max];


void Insert()
{
  if(rear==(max-1))
  {
    printf("Overflow\n");
  }

  else
  {
    int value;
    printf("Enter the value\n");
    scanf("%d",&value);
    rear++;
    if(rear==0)
    {
      front++;
    }
    queue=rear;
    a[queue]=value;
    display();

  }
}

void Remove()
{
  if(front==-1)
  {
    printf("underflow\n");
  }

  else
  {
    front++;
    display();

  }
}

void display()
{
  queue=front;
  printf("Elemnt of list is:\n");
  while(queue!=rear)
  {
    printf("%d",a[queue]);
    queue++;
  }
  if(queue==rear)
  {
    printf("%d",a[queue]);
  }
  printf("\n");
}



int main()
{

  int choice ;

  while(1)
  {

    printf("Enter the choice:");
    printf("1:Insert , 2:Remove , 0:Exit");
    scanf("%d",&choice);

    switch(choice)
    {
      case 1:
      {
        Insert();
        break;
      }
      case 2:
      {
        Remove();
        break;
      }
      case 0:
      {
        exit(0);
        break;
      }
    }
  }

}
