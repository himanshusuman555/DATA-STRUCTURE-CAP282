#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *left;
 struct node *right;
};
struct node *root;
void insert();
void traverse();
void addatbegin();
int length();
void addatafter();
void Delete();
void main()
{
 int ch,len;
 clrscr();
 while(1)
 {
  printf("Enter choice\n");
  printf("1.insert\n");
  printf("2.quit\n");
  printf("3.traverse\n");
  printf("4.addatbegin\n");
  printf("5.length\n");
  printf("6.addatafter\n");
  printf("7.delete\n");
  printf("--------------\n");
  scanf("%d",&ch);

  switch(ch)
  {
   case 1: insert();
	   break;
   case 2: exit(1);
	   break;
   case 3: traverse();
	   break;
   case 4: addatbegin();
	   break;
   case 5: len=length();
	   printf("Length=%d\n",len);
	   break;
   case 6: addatafter();
	   break;

   case 7:Delete();
	  break;
   default:printf("invalid choice\n");
  }

 }
}
void insert()
{
 struct node *temp,*p;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter node data\n");
 scanf("%d",&temp->data);
 temp->left=NULL;
 temp->right=NULL;
 if(root==NULL)
 {
  root=temp;
  printf("first node inserted\n");
 }
 else
 {
  p=root;
  while(p->right!=NULL)
  {
   p=p->right;
  }
  p->right=temp;
  temp->left=p;
  printf("node successfuly added at end\n");
 }
}

void traverse()
{
 struct node *p;
 if(root==NULL)
 {
  printf("no node in the list\n");
 }
 else
 {
  p=root;
  while(p!=NULL)
  {
   printf("%d ",p->data);
   p=p->right;
  }
 }
}
void addatbegin()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter node data\n");
 scanf("%d",&temp->data);
 temp->left=NULL;
 temp->right=NULL;

 if(root==NULL)
 {
  root=temp;
  printf("first node inserted\n");
 }
 else
 {
  temp->right=root;
  root->left=temp;
  root=temp;
  printf("node inserted at the beginnng\n");
 }
}
int length()
{
 int count=0;
 struct node *p;
 if(root==NULL)
 {
  printf("list is empty\n");
 }
 else
 {
  p=root;
  while(p!=NULL)
  {
   count++;
   p=p->right;
  }
 }
 return count;
}

void addatafter()
{
 int loc,len,i=1;
 struct node *temp,*p;
 printf("Enter location\n");
 scanf("%d",&loc);
 len=length();
 if(loc>len)
 {
  printf("invalid location\n");
  printf("locations available till %d only\n",len);
 }
 else
 {
  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter node data\n");
  scanf("%d",&temp->data);
  temp->left=NULL;
  temp->right=NULL;

  //travel till that node
  p=root;
  while(i<loc)
  {
   p=p->right;
   i++;
  }
  //once reached right side conn first
  temp->right=p->right;
  p->right->left=temp;
   //right done
   //now left
  temp->left=p;
  p->right=temp;
  printf("added successfully\n");
 }
}

void Delete()
{
 struct node *temp,*p,*q,*r;
 int len,loc,i=1;
 printf("enter location to delete the node\n");
 scanf("%d",&loc);
 len=length();
 if(loc>len)
 {
  printf("invalid location\n");
  printf("valid locations are :%d only",len);
 }
 else if(loc==0)
 {
  printf("no such lcoation\n");
 }
 else if(loc==1)
 {
  //right side conn first
  p=root;
  root=p->right;
  p->right->left=NULL;
  printf("deleted first node success\n");

 }
 else
 {
  p=root;
  while(i<loc-1)
  {
   p=p->right;
   i++;
  }
  q=p->right;
  r=q->right;

  r->left=p;
  p->right=r;
  printf("Delted successfuly\n");
 }
}










