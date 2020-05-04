#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50]={7,3,5,4,2,6};
 int temp,i,j,n=6;
 clrscr();
 for(i=0;i<n;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }

 for(i=1;i<n;i++)
 {
    temp=a[i];
    j=i-1;

    while(j>=0 && a[j]>temp)
    {
     a[j+1]=a[j];
     j=j-1;
    }
    a[j+1]=temp;
 }
 printf("\n after swapping\n");
 for(i=0;i<n;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }
 getch();
}


