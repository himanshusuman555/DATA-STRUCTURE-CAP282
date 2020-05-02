#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50]={2,4,6,8,9};
 clrscr();
 int i,pos;
 printf("Values into array are:");
 for(i=0;i<5;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }

 printf("\nEnter the position where you want to delete the element\n");
 scanf("%d",&pos);

 for(i=pos-1;i<5;i++)
 {
   a[i]=a[i+1];
 }
 printf("Now array\n");
 for(i=0;i<5-1;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }
 getch();
}
