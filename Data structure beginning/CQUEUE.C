#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define CAPACITY 5
int cqueue[CAPACITY];
int front=-1;
int rear=-1;
int ele;
void insert(int);
void Delete();
void traverse();
void main()
{
	 int ch;
	 clrscr();
	 while(1)
	 {
		  printf("Enter choice\n");
		  printf("1.insert\n");
		  printf("2.delete\n");
		  printf("3.quit\n");
		  printf("4.traverse\n");
		  scanf("%d",&ch);

		  switch(ch)
		  {
		   case 1: printf("Enter the element\n");
		   scanf("%d",&ele);
		   insert(ele);
		   break;
		   case 2: Delete();
		   break;
		   case 3: exit(1);
		   break;
		   case 4: traverse();
		   break;
		   default: printf("invalid choice\n");
		   }
	  }
}
void insert(int ele)
{        //2nd time ful	l     //full
	  if((front==rear+1 ) || ( rear==CAPACITY-1 && front==0 ))
	  {
		 printf("cqueue is full\n"); //if q is full we cant fill
	  }
	  else if(front==-1 && rear==-1)      //so initially when empty
	  {
		   front=rear =0;
		   cqueue[rear]=ele ;
	  }
	  else if(rear==CAPACITY-1)
	  {
		  rear=0;
		  cqueue[rear]=ele;  //inserted 10//after full,  it come to rear 0
	  }                          // nd insert value at rear 0 i.e 60
	  else
	  {
		   rear++;                 // //then rear =1 ,70
		   cqueue[rear]=ele;       //inserted 20,30,40,50
	 }
}

void Delete()
{
	 if(front==-1 &&rear==-1)
	 {
		  printf("CQueue is empty\m");
	 }
	 else if(front==rear)
	 {
		  ele=cqueue[front];
		  printf("%d element deleted\n",ele);
		  front=rear=-1;  //dlting the last 70 element
	 }
	 else if(front==CAPACITY-1)
	 {
		  ele=cqueue[front];//when full; //and we need to dlt to insert new
		  printf("%d deleted\n",ele);
		  front=0;
	 }
	 else
	 {
		  ele=cqueue[front];    //dlt 30,40,,50
		  printf("%d element deleted\n",ele);
		  front++;
	 }                      //no front =1
}

void traverse()
{
	int i;
	if(front==-1 &&rear==-1)
	 {
		 printf("queue is empty\n");
	 }

	 if(rear>=front)
	 {
		 for(i=front;i<=rear;i++)     //OLD ELEMENTS WILL PRINT
		 printf("%d\n",cqueue[i]);
	 }

	 else
	 {
		    for(i=front ;i<CAPACITY;i++)
		    printf("%d\n",cqueue[i]);

		    for(i=0;i<=rear;i++)     //1 way to print all
		    printf("%d\n",cqueue[i]);

	 }
}