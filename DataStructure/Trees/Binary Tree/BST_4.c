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

void  insert(struct node *tree , int val)
{
  
}

int main()
{
  root=NULL;
  insert(&root , 9)
  insert(&root , 4);
  insert(&root , 15);
  insert(&root , 6);
}
