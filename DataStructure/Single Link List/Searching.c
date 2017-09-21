#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head , *temp1;

int c=1;

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

void  searching(int item)
{

  temp1=head;
  while(temp1->data!=item)
  {
    temp1=temp1->next;
    c++;

    if(temp1==NULL)
    {
      printf("Your item is not valid to search\n");
      break;
    }
  }




}

void displayposs()
{

  printf("Your item possition is: %d",c);
  printf("\n");
}

int main()
{
  head=NULL;
  int i,value , n,item;
  printf("Enter the numbber of nodes\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    printf("Enter the value\n");
    scanf("%d",&value);
    create(value);
  }
  display();

  printf("Enter the item to search\n");
  scanf("%d",&item);
  searching(item);
  if(temp1!=NULL)
  {
    displayposs();
  }

}
