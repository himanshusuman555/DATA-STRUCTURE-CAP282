#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50]={2,4,6,8,0};
 int i,j,temp;
 clrscr();
 printf("ELements in the array are:");
 for(i=0;i<5;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }
 i=0;
 j=5-1;
 while(i<j)
 {
  temp=a[i];
  a[i]=a[j];
  a[j]=temp;
  i++;
  j--;
 }
 printf("\nElelements after reverse\n");
 for(i=0;i<5;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
  }
}
