#include<stdio.h>
#include<conio.h>
#define CAPACITY 5
int queue[CAPACITY];
int front=0;
int rear=0;
void insert();
void Delete();
void traverse();
void main()
{
 int ch;
 clrscr();
 while(1)
 {
  printf("\n-----------------");
  printf("\nEnter choice\n");
  printf("1.insert\n");
  printf("2.delete\n");
  printf("3.traverse\n");
  printf("4.quit\n");
  printf("-----------------\n");
  scanf("%d",&ch);

  switch(ch)
  {
   case 1: insert();
	   break;
   case 2: Delete();
	   break;
   case 3: traverse();
	   break;
   case 4: exit(1);
	   break;
   default: printf("invalid choice \n");
	   break;
  }
 }
}

void insert()
{
 int ele;
 if(CAPACITY==rear)
 {
  printf("\nQueue is full\n");
 }
 else
 {
  printf("Enter value in queue :");
  scanf("%d",&ele);
  queue[rear]=ele;
  rear++;
 }
}

void Delete()
{
 int ele;
 if(front==rear)
 {
  printf("\nqueue is empty\n");
 }
 else
 {
  int i;
  ele=queue[front];
  printf("%d removed\n",ele);
  for(i=0;i<rear-1;i++)
  {
   queue[i]=queue[i+1];
  }
  rear--;
 }
}

void traverse()
{
 if(front==rear)
 {
  printf("\nqueue is empty\n");
 }
 else
 {
  int i;
  printf("queue elements are: ");
  for(i=front;i<rear;i++)
  {
   printf("%d \t",queue[i]);
  }
 }
}



