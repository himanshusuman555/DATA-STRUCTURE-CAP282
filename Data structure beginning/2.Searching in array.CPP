#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50]={2,4,6,8,9};
 clrscr();
 int i,ele,pos,flag=0;
 printf("Elemwnts in the array are:");
 for(i=0;i<5;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }
 printf("\nEnter element to be searched");
 scanf("%d",&ele);

 for(i=0;i<5;i++)
 {
  if(a[i]==ele)
  {
   printf("Element found at index a[%d] position= %d ",i,i+1);
   flag=1;
   break;
  }
 }
 if(flag==0)
 {
  printf("Element not found");
 }
 getch();
}
