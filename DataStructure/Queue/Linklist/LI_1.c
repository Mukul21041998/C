#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *front;
struct node *rear;
struct node *temp1 , *temp2 , *temp3;

void Display()
{
  temp3=front;
  printf("Queue is:\n");
  while(temp3!=NULL)
  {
    printf("%d",temp3->data);
    temp3=temp3->next;
  }
  printf("\n");
}


void Insert()
{
  int value;
  temp1=(struct node*)malloc(sizeof(struct node));
  printf("Entert the value of a node\n");
  scanf("%d",&value);
  temp1->data=value;
  temp1->next=NULL;
  if(rear==NULL)
  {
      front=temp1;
  }
  if(rear!=NULL)
  {
    rear->next=temp1;
  }
  rear=temp1;
  Display();

}

void Deletion()
{
  if(rear==front)
  {
    printf("List is empty\n");
    exit(0);
  }
  front=front->next;
  Display();
}




int main()
{
  front=NULL;
  rear=NULL;
  int choice;
  while(1)
  {
    printf("Enter the coice\n");
    printf("1:Insert\n2:Deletion\n0:Exit");
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
        Deletion();
        break;
      }

      case 0:
      {
        exit(0);
        break;
      }
    }
  }
  return 0;
}
