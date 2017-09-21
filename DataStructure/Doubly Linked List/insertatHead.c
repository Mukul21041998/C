#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

struct node *head , *temp1;

struct node *getNewNode(int x)
{

  struct node *newNode;
  newNode=(struct node*)malloc(sizeof(struct node));
  newNode->data=x;
  newNode->prev=NULL;
  newNode->next=NULL;
  return newNode;

}

void insertatHead(int x)
{
  struct node *temp;
  temp=getNewNode(x);
  if(head==NULL)
  {
    head=temp;

  }

  else
  {
    head->prev=temp;
    temp->next=head;
    head=temp;
  }

}


void displayatForaward()
{
  temp1=head;
  printf("List is:\n");
  while(temp1->next!=NULL)
  {
    printf("%d",temp1->data );
    temp1=temp1->next;

  }
  printf("%d",temp1->data );
  printf("\n");


}

void displayatReverse()
{
  printf("Reverse list is:\n");
  while(temp1!=NULL)
  {
    printf("%d",temp1->data );
    temp1=temp1->prev;
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
    insertatHead(x);

  }

  displayatForaward();
  displayatReverse();




}
