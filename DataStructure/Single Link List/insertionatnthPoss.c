#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data ;
  struct node *next;
};

struct node *start , *temp1;

void create(int value)
{
  struct node *temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp->data=value;
  temp->next=NULL;
  if(start==NULL)
  {
      start=temp;
      temp1=start;
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
  temp2=start;
  printf("List is:");
  while(temp2!=NULL)
  {
    printf("%d",temp2->data);
    temp2=temp2->next;

  }
  printf("\n");
}

void insert(int value ,  int poss)
{
  int i;
  struct node *temp3;
  temp3=(struct node*)malloc(sizeof(struct node));
  temp3->data=value;
  temp3->next=NULL;
  temp1=start;
  for(i=0;i<(poss-1);i++)
  {
    temp1=temp1->next;
  }
  temp3->next=temp1;
  temp1=start;
  if(poss!=1)
  {
    for(i=0;i<(poss-2);i++)
    {
      temp1=temp1->next;
    }
    temp1->next=temp3;
  }
  else
  {
    temp3->next=start;
    start=temp3;
  }
}

int main()
{
  start=NULL;
  int n,value , poss, i;

  printf("Enter the number of nodes\n");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    printf("Enter the values\n");
    scanf("%d",&value);
    create(value);

  }
  display();

  printf("Enter the possition of new node\n");
  scanf("%d",&poss);
  printf("Enter the value of new node\n");
  scanf("%d",&value);
  insert(value , poss);
  printf("New list is :\n");
  display();
}
