#include<stdio.h>
#include<conio.h>
void  main()
{
 int i,a[50]={9,3,1,4,2,7,5};
 int temp,min,j,n=7;

 for(i=0;i<n-1;i++)
 {
  min=i;
  for(j=i+1;j<n;j++)
  {
    if(a[j]<a[min])
     {
      min=j;
     }
  }
  temp = a[i];
  a[i] =a[min];
  a[min] = temp;
 }

 printf("Now elements in the array are:\n");
 for(i=0;i<n;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }
 getch();
}



