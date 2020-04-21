#include<stdio.h>
#include<conio.h>
void main()
{
 int a[100],i,n,pos,val;
 printf("Enter how many values insert into arrray list\n");
 scanf("%d",&n);
 printf("Enter values into array\n");
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }

 printf("Enter new elements position\n");
 scanf("%d",&pos);
 printf("Enter new elememnt\n");
 scanf("%d",&val);

 for(i=n-1;i>=pos-1;i--)
 {
  a[i+1]=a[i];
 }
 a[pos-1]=val;

 printf("Now list\n");
 for(i=0;i<=n;i++)
 {
  printf("%d",a[i]);
 }
}
