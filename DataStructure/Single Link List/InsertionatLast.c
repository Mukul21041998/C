#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *next;
};

struct node *head , *temp2;

void insert(int value)
{
  struct node *temp ;
  temp = (struct node*)malloc(sizeof(struct node));
  temp->data=value;
  temp->next=NULL;
  if (head==NULL)
  {
    head=temp;
    temp2 = head;
  }
    else
    {

      temp2->next=temp;
      temp2=temp;
    }



}

void display()
{
  struct node *temp3;
  temp3=head;
  printf("List is:");
  while(temp3!=NULL)
  {
    printf("%d",temp3->data);
    temp3=temp3->next;

  }
  printf("\n");
}

int main()
{
  head = NULL;

  int i, value , n;

  printf("Enter the numbers\n");
  scanf("%d",&n);


  for(i=0;i<n;i++)
  {
    printf("Enter the value\n");
    scanf("%d",&value);
    insert(value);
    display();
  }
}
