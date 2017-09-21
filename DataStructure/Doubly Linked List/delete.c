#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

struct node *head , *temp1,*temp2;

struct node *getNewNode(int x)
{

  struct node *newNode;
  newNode=(struct node*)malloc(sizeof(struct node));
  newNode->data=x;
  newNode->prev=NULL;
  newNode->next=NULL;
  return newNode;

}

void insertatTail(int x)
{
  struct node *temp1;
  temp1=getNewNode(x);
  if(head==NULL)
  {
    head=temp1;
    temp2=head;
    return;
  }
  temp1->prev=temp2;
  temp2->next=temp1;
  temp2=temp1;

}

void display()
{
  struct node *temp3;
  temp3=head;
  printf("List is:\n");
  while(temp3!=NULL)
  {
    printf("%d",temp3->data);
    temp3=temp3->next;
  }
  printf("\n");
}

void delete(int x)
{
  struct node *temp4 , *temp5;
  temp1=head;
  while(temp1->data!=x)
  {
    temp1=temp1->next;
  }

  temp4=head;
  temp5=head;

  while(temp4!=temp1->prev)
  {
    temp4=temp4->next;
  }

  while(temp5!=temp1->next)
  {
    temp5=temp5->next;
  }

  temp4->next=temp5;
  temp5->prev=temp4;

}

void displayNewList()
{
  struct node *temp6;
  temp6=head;
  printf("New list is:\n");
  while(temp6!=NULL)
  {
    printf("%d",temp6->data);
    temp6=temp6->next;
  }
  printf("\n");
}

int main()
{
  head=NULL;

  int i , x ,n;

  printf("Enter the number to create node\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the value\n");
    scanf("%d",&x);
    getNewNode(x);
    insertatTail(x);
  }

  display();

printf("Enter the value to delete from the list\n");
scanf("%d",&x);
delete(x);
displayNewList();
}
