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






}
