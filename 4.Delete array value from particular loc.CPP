#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50],n,i,pos;
 clrscr();
 printf("Enter how many values insert into arrray list\n");
 scanf("%d",&n);
 printf("Enter %d values now\n",n);
 for(i=0;i<n;i++)
 {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
 }
 printf("Enter position to delete value\n");
 scanf("%d",&pos);

 for(i=pos-1;i<n-1;i++)
 {
  a[i]=a[i+1];
 }
 printf("array list now\n");
 for(i=0;i<n-1;i++)
 {
  printf("a[%d]=",i);
  printf("%d\n",a[i]);
 }
}


