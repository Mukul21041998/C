#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *top;

void push(int x)
{
  struct node *temp;
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=x;
  temp->next=NULL;
  if(top!=NULL)
  {
    temp->next=top;
  }
  top=temp;
}

void pop()
{
  struct node *temp;
  temp=top;
  top=temp->next;
  free(temp);
}

void print()
{
  struct node *temp;
  temp=top;

  while(temp!=NULL)
  {
    printf("%d",temp->data);
    temp=temp->next;
  }
  printf("\n");
}

int main()
{
  top=NULL;

  push(12);print();
  push(45);print();
  push(39);print();
  pop();print();
}
