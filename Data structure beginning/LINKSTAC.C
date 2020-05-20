#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *link;
};
struct node *top=NULL;
void push(void);
void pop(void);
void traverse(void);
void main()
{
 int ch;
 clrscr();
 while(1)
 {
  printf("Enter choice\n");
  printf("1.push\n");
  printf("2.exit\n");
  printf("3.pop\n");
  printf("4.traverse\n");
  scanf("%d",&ch);

  switch(ch)
  {
   case 1: push();
	   break;

   case 2: exit(1);
	   break;

   case 3: pop();
	   break;

   case 4: traverse();
	   break;
   default: printf("invalid choice\n");
	    break;
   }
  }
}
void push()
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter data in the node\n");
 scanf("%d",&temp->data);
 printf("%d inserted\n",temp->data);
 temp->link=top;
 top=temp;
}

void pop()
{
 struct node* temp;
 if(top==NULL)
 {
  printf("stack is empty\n");
 }
 else
 {
 temp=top;
 printf(" %d deleted ",temp->data);
 top=top->link;
 temp->link=NULL;
 free(temp);
 }
}

void traverse()
{
 struct node *temp;
 if(top==NULL)
 {
  printf("stack is empty\n");
 }
 else
 {
  temp=top;
  while(temp!=NULL)
  {
   printf("%d ",temp->data);
   temp=temp->link;
  }
 }
}

