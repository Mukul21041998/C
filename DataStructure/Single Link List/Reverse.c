#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head , *temp1 ,*temp4;

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

void Reverse(int i)
{

  if(i==0)
{
  temp1=head;
}

  struct node *temp3 ;
  temp3=(struct node*)malloc(sizeof(struct node));
  temp3->data=temp1->data;
  temp3->next=NULL;
  if(i!=0)
  {
    temp3->next=temp4;
  }
  temp1=temp1->next;
  temp4=temp3;

}

void displayRev()
{
  printf("Reverse list is :\n" );

  while(temp4!=NULL)
  {
    printf("%d",temp4->data);
    temp4=temp4->next;
  }
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
  for(i=0;i<n;i++)
  {
      Reverse(i);
  }
  displayRev();
}
