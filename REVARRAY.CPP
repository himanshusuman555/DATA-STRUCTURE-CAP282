#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50]={10,20,30,40,50};
 int i,j,n=5,temp;
 clrscr();
 printf("Array list\n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }
 printf("\nReverse of array\n");
 i=0;
 j=n-1;

 while(i<j)
   {
    temp= a[i];
    a[i]= a[j];
    a[j]= temp;

    i++;
    j--;
   }
 printf("Array list now\n");
 for(i=0;i<n;i++)
 {
  printf("%d\n",a[i]);
 }
}

