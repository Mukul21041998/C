#include<stdio.h>

#define max 1

int front =-1;
int rear=-1;
int queue;
int a[max];

void insert()
{
  if(rear==(max-1))
  {
    printf("Overflow");
  }
  else
  {
    int number;
    printf("Enter the number to insert\n");
    scanf("%d",&number);
    rear++;
    queue=rear;
    a[queue]=number;
    display();
  }

}

void remove()
{
  if(front==-1)
  {
    printf("underflow\n");
    return;
  }

  else
  {
    front++;
    queue=front;
    queue++;
    display();
  }
}

void display()
{
  printf("Element in queue is:\n");
  queue=0;
  while(queue!=rear)
  {
    printf("%d",a[queue]);
    queue++;
  }
  if(queue==rear)
  {
    printf("%d" ,a[queue]);
  }
}



int main()
{
  int choice;
  while(1)
  {
    printf("Enter the chocice");
    printf("1:Insert , 2:Remove , 0:Exit");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      insert();
      break;

      case 2:
      remove();
      break;

      case 3:
      exit(0);
      break;

    }
  }

}
