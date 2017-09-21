#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head , *temp1;

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
    printf("%d",temp2->data);
    temp2=temp2->next;

  }
  printf("\n");
}

void deleteatBegin()
{
  temp1 = head;
  temp1=temp1->next;
  head=temp1;
}

void newDisplay()
{
  struct node *temp2;
  temp2=head;
  printf("After deletion new list is:");
  while(temp2!=NULL)
  {
    printf("%d",temp2->data);
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
  deleteatBegin();
  newDisplay();
}
