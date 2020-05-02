#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100]={2,5,7,8,9};
 clrscr();
 int i,pos,num;
 printf("Elements in the array are:");
 for(i=0;i<5;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }
 printf("\nEnter the position and element you want to insert in array:\n");

 scanf("%d%d",&pos,&num);


 for(i=4;i>=pos-1;i--)
 {
  a[i+1]=a[i];
 }
  a[pos-1]=num;

  printf("now array:=");
  for(i=0;i<6;i++)
  {
   printf("\na[%d]=",i);
   printf("%d",a[i]);
  }
}

