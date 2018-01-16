#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

struct node *root;
struct node *temp;
struct node *temp1;

void insert()
{

  int  value;
  printf("Enter the value\n");
  scanf("%d",&value);
  temp=(struct node*)malloc(sizeof(struct node));
  if(root==NULL)
  {
    root=temp;
    root->data=value;
    root->next=NULL;
    root->prev=NULL;
    temp1=root;

  }

  else
  {
    if(value < temp1->data)
    {
      root->-prev=temp;
      temp->data=value;
    }

    else
    {
      root->next=temp;
      temp->data=value;
    }
  }
}



int main()
{
  root=NULL;
  int choice;
  while(1)
  {
    printf("Enter the choice\n");
    printf("Press-1:Insert\n");
    printf("Press-0:Exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
      {
        insert();
      }

      case 0:
      {
        exit(0);
      }
    }
  }
}
