#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head , *temp1 , *temp3;

void create(int value)
{
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp->data=value;
  temp->next=NULL;
  if(head==NULL)
  {
      head=temp;
      temp1=head;
  }

  else
  {
    temp1->next=temp;
    temp1=temp;
  }

}

void display()
{
  struct node *temp2;
  temp2=head;
  printf("List is:");
  while(temp2!=NULL)
  {
    printf("%d\t",temp2->data);
    temp2=temp2->next;

  }
  printf("\n");
}

void ascending(int i)
{
  int swap;
  if(i==0)
  {
    temp1=head;
    temp3=temp1->next;
  }

  while(temp3!=NULL)
  {
    if(temp1->data>temp3->data)
    {
      swap=temp1->data;
      temp1->data=temp3->data;
      temp3->data=swap;
    }

    temp3=temp3->next;
  }
  temp1=temp1->next;
  temp3=temp1->next;

}

void displayAscendingList()
{
  struct node *temp2;
  temp2=head;
  printf("Ascending order list is:");
  while(temp2!=NULL)
  {
    printf("%d\t",temp2->data);
    temp2=temp2->next;

  }
  printf("\n");
}

void descending(int i)
{
  int swap;
  if(i==0)
  {
    temp1=head;
    temp3=temp1->next;
  }

  while(temp3!=NULL)
  {
    if(temp1->data<temp3->data)
    {
      swap=temp1->data;
      temp1->data=temp3->data;
      temp3->data=swap;
    }

    temp3=temp3->next;
  }
  temp1=temp1->next;
  temp3=temp1->next;

}

void displayDescendingList()
{
  struct node *temp2;
  temp2=head;
  printf("Descending order list is:");
  while(temp2!=NULL)
  {
    printf("%d\t",temp2->data);
    temp2=temp2->next;

  }
  printf("\n");
}


int main()
{
  head=NULL;
  int i,value , n;
  printf("Enter the numbber of nodes\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the value\n");
    scanf("%d",&value);
    create(value);
  }
  display();

  for(i=0;i<n-1;i++)
  {
    ascending(i);
  }

  displayAscendingList();

  for(i=0;i<n-1;i++)
  {
    descending(i);
  }

  displayDescendingList();
}
