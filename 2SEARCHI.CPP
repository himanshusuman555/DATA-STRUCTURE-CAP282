#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],i,val,flag=0,n;
 clrscr();
 printf("Enter how many item insert into array list\n");
 scanf("%d",&n);
 printf("Enter values into array:\n");
 for(i=0;i<n;i++)
 {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
 }

 printf("Enter value to be searched");
 scanf("%d",&val);

 for(i=0;i<n;i++)
 {
   if(a[i]==val)
   {
    printf("Value found at array index %d posiiton %d" ,i,i+1);
    flag=1;
    break;
   }
  }

  if(flag==0)
  {
   printf("Value Not found");
  }
}