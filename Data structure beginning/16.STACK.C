//Stack implementation using static array
#include<stdio.h>
#include<conio.h>
#define CAPACITY 5
int stack[CAPACITY];
int top=-1;
void push(int);
int pop(void);
int isfull(void);
int isempty(void);
void peek(void);
void traverse(void);
void main()
{
 clrscr();
 while(1)
 {
  int ch,item;
  printf("Enter the choice \n");
  printf("1.push\n");
  printf("2.pop\n");
  printf("3.peek\n");
  printf("4.traverse\n");
  printf("5.quit\n");
  scanf("%d",&ch);

  switch(ch)
  {
   case 1:
	  printf("Enter the element to push into the stack\n");
	  scanf("%d",& item);
	  push(item);
	  break;

   case 2: item=pop();
	   if(item==0)
	   {
	    printf("stack is underflow\n");
	   }
	   else
	   {
	    printf("popped item : %d\n",item);
	   }

	   break;
   case 3: peek();
	  break;
   case 4: traverse();
	  break;
   case 5: exit(1);
	  break;
   default: printf("Invalid choice");
  }
 }
}
void  push(int ele)
{
 if(isfull())
 {
   printf("Stack is full");
 }
 else
 {
  top++;
  stack[top]=ele;
  printf("%d inserted \n",ele);
 }
}
int isfull()
{
 if(top==CAPACITY-1 )
 {
  return 1;
 }
 else
 {
  return 0;
 }
}

int pop()
{
 if(isempty())
 {
      return 0;
 }
 else
 {
    return stack[top--];
 }
}
int isempty()
{
   if(top==-1)
   {
    return 1;
   }
   else
   {
    return 0;
   }
}

void peek()
 {
  if(isempty())
  {
    printf("Stack is empty\n");
  }
  else
  {
   printf("peek element :%d\n", stack[top]);
  }
}
void traverse()
{
 int i;
 if(isempty())
 {
  printf("stack is empty");
 }
 else
 {
  printf("Elements in the stack are:\n");
  for(i=0;i<=top;i++)
  {
   printf("%d\n",stack[i]);
  }
 }
}
