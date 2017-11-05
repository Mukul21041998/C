#include<stdio.h>
#include<stdlib.h>

#define max 4

int front=-1;
int rear=-1;
int queue;
int a[max];

void Display()
{
  queue=0;
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



void Enqueue()
{
  if(rear==max-1)
  {
    printf("List is full\n");
  }

  else
  {
    int value;
    printf("Enter the value\n");
    scanf("%d",&value);
    if(front==rear)
    {
      front=0;
    }
    rear++;
    queue=rear;
    a[queue]=value;
    Display();
  }

}

void empty()
{
  front=-1;
  rear=-1;
}

void Dequeue()
{
  if(front==rear)
  {
    printf("List is empty\n");
    empty();
    return;
  }

  else
  {
    front=0;
    int i;
    for(i=0;i<rear;i++)
    {
      front++;
      a[i]=a[front];
    }
    rear=front-1;
    front=0;
    Display();

  }
}


int main()
{

  int choice ;

  while(1)
  {

    printf("Enter the choice\n:");
    printf("1:Insert , 2:Remove , 0:Exit");
    scanf("%d",&choice);

    switch(choice)
    {
      case 1:
      {
        Enqueue();
        break;
      }
      case 2:
      {
        Dequeue();
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
