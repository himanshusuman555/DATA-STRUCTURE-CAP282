#include<stdio.h>
#include<conio.h>
void main()
{
 int a[30]={5,463,67,1};
 int i,j,n=5,temp;

 printf("Elements in the array\n");
 for(i=0;i<n;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }

 for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1;j++)
     {
	if(a[j]>a[j+1])
	{
	  temp= a[j];
	  a[j]=a[j+1];
	  a[j+1]= temp;
	}
     }
  }
 printf("Array now\n");
 for(i=0;i<n;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }
getch();
}

