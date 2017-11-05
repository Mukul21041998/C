#include<stdio.h>
#include<stdlib.h>

#define max 50
int top=-1;
int stk[max];

 struct node
 {
   int data;
   struct node *next;
 };

 struct node *head,*temp1;

 void insertatEnd(int value)
 {
   struct node *temp;
   temp=(struct node*)malloc(sizeof(struct node));
   temp->data=value;
   temp->next=NULL;
   if(head==NULL)
   {
      head=temp;
      temp1=temp;
   }
   else
   {
     temp1->next=temp;
     temp1=temp;
   }


 }

 void push(int value)
 {
   if(top==(max-1))
   {
     printf("overflow");
   }

   else
   {
     top++;
     stk[top]=value;
   }
 }

 void display()
 {
   temp1=head;
   printf("list is:");
   while(temp1!=NULL)
   {
     printf("%d",temp1->data);
     temp1=temp1->next;
   }

   printf("\n");
 }

 void pop()
 {
   if(top==-1)
   {
     printf("underflow\n");
   }

   else
   {
     printf("%d",stk[top]);
     top--;

   }
 }

 int main()
 {
   head=NULL;
   int i,value,n;
   printf("Enter the number of nodes\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     printf("Enter the value\n");
     scanf("%d",&value);
     insertatEnd(value);
     push(value);
   }
    display();

    printf("Reverse list is:");
    for(i=0;i<n;i++)
    {
      pop();
    }


 }
