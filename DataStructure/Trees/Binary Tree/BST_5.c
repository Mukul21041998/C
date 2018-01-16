#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *root;
struct node *temp;
struct node *temp1;
int  value;

int getnewnode(int value)
{
  temp=(struct node*)malloc(sizeof(struct node));
  temp->data=value;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}


struct node* insert(root, value)
{
  if(root==NULL)
  {
    root=getnewnode(value);
  }

  else if(value <= root->data)
  {
    root->left=insert(root->left,value);
  else
  {
    root->right=insert(root->right,value);
  }

  return root;
}

void display(root)
{
  temp1=root;
  while(temp1!=NULL)
  {
    printf("%d",temp1->data);
    temp1=temp1->right;
  }
}

int main()
{
  root==NULL;
  root=insert(root,10);
  root=insert(root,20);
  root=insert(root,30);
  root=insert(root,40);
  root=insert(root,50);
  display(root);
}
