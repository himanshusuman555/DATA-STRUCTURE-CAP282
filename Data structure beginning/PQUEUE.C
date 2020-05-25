#include<stdio.h>
#include<conio.h>
#include<string.h>
struct node
{
 struct node *next;
 int pri;
 int info;
};
struct node *head=NULL;
struct node *ptr,*temp,*loc;
void insertnode();
void traverse();
void Delete_element(int);
void main()
{
 int ch,pr;
 clrscr();
 while(1)
	 {
		  printf("1.Enqueue\n");
		  printf("2.traverse\n");
		  printf("3.Dequeue\n");
		  printf("4.Exit\n");
		  printf("______________\n");

		  scanf("%d",&ch);

		  switch(ch)
		  {
		   case 1: insertnode();
			   break;
		   case 2: traverse();
			   break;
		   case 3: printf("Enter the priority of element which you want to delete=\n");
			   scanf("%d",&pr);
			   Delete_element(pr);
			   break;
		   case 4: exit(1);
			   break;
		   default: printf("invalid choice\n");
		  }

	 }
}
void insertnode()
{
  int n,i;
  printf("Enter the No. of Element for insertion=");
  scanf("%d",&n);
  printf("Enter the Priority and Element\n");
  for(i=0;i<n;i++)
  {
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Priority=");
    scanf("%d",&temp->pri);
    printf("Data=");
    scanf("%d",&temp->info);
    if(head==NULL)
    {
	head=temp;
	temp->next=NULL;
    }

    else
    {
	ptr=head;
	while(ptr->pri<temp->pri&&ptr->next!=NULL)
	{
	    loc=ptr;
	    ptr=ptr->next;
	}
	//while loop for traversing element.....
	if(ptr->pri>temp->pri)
	 {
	    if(ptr==head)
		{
		temp->next=head;
		head=temp;
		}
	     else
		{
		temp->next=ptr;
		loc->next=temp;
		}
	   }

	 else
	 {
	    loc=ptr->next;   // pointing next node of current pointer....
	    temp->next=loc;
	    ptr->next=temp;

	 }
    }
  }


    printf("_____________________________\n");
}



void Delete_element(int given_pr)
{
    struct node* ptr, *loc;
    ptr=head;
    if(head==NULL)
    {
        printf("List is already Empty\n");
    }
    else
    {
        while(ptr->pri!=given_pr)
        {
            loc=ptr;
            ptr=ptr->next;
            if(ptr==NULL)
            {
                break;

            }
        }
    }

     if(ptr==NULL)
        {
           printf("Wrong Priority of element entered!!!\n");

        }
     else if (ptr==head)
        {
            head=head->next;
            free(ptr);
            printf("Priority of %d element is successfully deleted\n",given_pr);

        }
        else
        {
            loc->next=ptr->next;
            free(ptr);
            printf("Priority of %d element is successfully deleted\n",given_pr);

        }

  printf("___________________________________________\n");
}

void traverse()
{
  struct node *ptr;
 printf("_______________________\n");

 ptr=head;

 if(head==NULL)
 {
  printf("Empty list\n");
 }
 else
 {
  while(ptr!=NULL)
  {
   printf("|%d %d|",ptr->pri,ptr->info);
   ptr=ptr->next;
  }
  printf("\b");
 }
 printf("\n_________________________\n");
}
