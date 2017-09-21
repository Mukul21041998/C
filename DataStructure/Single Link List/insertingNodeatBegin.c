#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data ;
  struct node* next;
};

struct node* head;

void insert(int x)
{
  struct node* temp;
  temp = (struct node*)malloc(sizeof(struct node));
  temp -> data = x;
  temp -> next = NULL;

  if(head!=NULL)
  {
    temp -> next = head;
  }

  head = temp;
}
void print()
{
  struct node* temp1;
  temp1  = head;


  printf("List is:");

  while(temp1!=NULL)
  {
    printf("%d",temp1 -> data);
    temp1 = temp1 -> next;

  }

  printf("\n");
}

int main()
{
  int n,i,x;

  head = NULL;
  printf("Enter the numbers \n" );
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
    printf("Enter the value\n");
    scanf("%d",&x);
    insert(x);
    print();
  }
}
