/* SingLE link List operations */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
 int data;
 struct node *link;
};
struct node *root=NULL;
int len;  //its global it will use inside plus outside of main also
//global values are always zero by ddefault.


void append(void);
void addatbegin(void);
void addatafter(void);
int length(void);
void display(void);
void Delete(void);
void main()
{
  int ch,i;
  clrscr();
  while(1)
  {
   printf("\n\n Single linked list operations :\n");
   printf("1.Append\n");
   printf("2.Addatbegin\n");
   printf("3.Addatafter\n");
   printf("4.Length\n");
   printf("5.Display\n");
   printf("6.Delete\n");
   printf("7.Quit\n");

   printf("Enter your choice :");
   scanf("%d",&ch);

   switch(ch)
   {
    case 1: append();
	    break;
    case 2: addatbegin();
	    break;
    case 3: addatafter();
	    break;
    case 4: len = length();
	    printf(" Length= %d",len);  //return value will be assined into here in len
	    break;
    case 5: display();
	    break;
    case 6: Delete();
	    break;
    case 7: exit(1);
	    break;

    default: printf("Invalid input\n\n");
   }
  }

}
//Now we need to define the structure i.e struct of linked list  and that we define above the void main()
//till now root  is created   and its initial value is null now create the nodes ,where we are going to create in the append function

void append() //add at the end
{
  struct node *temp;

  temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter node data:");
  scanf("%d",&temp->data);
  temp->link=NULL;

  if(root==NULL)
  {
   root=temp;
  }

  else
  {
     struct node *p;
     p=root;
     while(p->link!=NULL)
     {
      p=p->link;
     }
     p->link=temp;
  }
}


int length()       //int length cause we have to return length
{
  int count=0;
  struct node *temp;
  temp=root;

  while(temp!=NULL)   //if no node address in root/temp it will return 0  no nodes
  {                      //but if temp is not nullit has
    count++;                 // it will return till goes in the last block so 1st block to last itself
   temp	=temp->link;         //toh last wale m ghusne k bbaad wo null asssin ho jaega temp m, null!=null ho jaega
  }
  return count;

}


void display()
{
 struct node *temp;
 temp=root;

 if(temp==NULL)
 {
  printf("List is empty\n");
 }
 else
 {
  while(temp!=NULL)
  {
   printf("%d->",temp->data);
   temp=temp->link;
  }
  printf(" \n \n");   //2 lines gape after printinh the lsit
 }
}
//now we will write prototype above the main
void addatbegin(void)
{
 struct node *temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("Enter node data\n");
 scanf("%d",&temp->data);
 temp->link=NULL;

 if(root==NULL)
 {
  root=temp;
 }
 else
 {
  temp->link=root;
  root=temp;
 }
}

void addatafter(void)
{
 struct node *temp,*p;
 int loc,i=1;

 printf("Enter location where addafter\n");
 scanf("%d",&loc);

 len=length();
 if(loc>len)
  {
   printf("invalid location\n");
   printf("currently list is having %d node",len);
  }
  else
  {
   p=root;
   while(i<loc)
   {
    p=p->link;
    i++;
   }
   temp=(struct node*)malloc(sizeof(struct node));
   printf("Enter the data\n");
   scanf("%d",&temp->data);
   temp->link=p->link;       //right side connection
   p->link=temp;             //left side connection
  }

}
void Delete(void)
{
  int loc;
  struct node *temp;
  printf("Enter location to delete the node\n");
  scanf("%d",&loc);

  if(loc>length())
  {
   printf("invalid location\n");
  }

  else if(loc==1)
  {
   temp=root;
   root=temp->link;     //left side connection cut
   free(temp);          //freed temp
  }
			    //root nod   // 1st     2nd      //3rd    4rth
  else         //node b lik root=1000->  10,2000-> 20,3000-> 30,4000-> 40,NULL
  {                                   //  1000       2000      3000     4000
   struct node *p=root,*q;
   int i=1;      //if del loc is 3 then we have to loop till 2nd node
   while(i<loc-1)
   {
    p=p->link;      //loop in 2nd node//  p=2000->link;   //i.e 3000 in p now
    i++;
   }
   q=p->link;       //q=3000->link;   //i.e 4000 in q now

   p->link=q->link;      //3000->NULL
   free(q);
  }
}


