#include<stdio.h>
#include<conio.h>
void main()
{
 int a[5]={1,2,3,4,5};
 clrscr();
 int b[5]={6,7,8,9,10};
 int c[5],i;

 printf("1 st array elements\n");
 for(i=0;i<5;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }

 printf("\n\n2nd array elements\n");
 for(i=0;i<5;i++)
 {
  printf("\nb[%d]=",i);
  printf("%d",b[i]);
 }


 for(i=0;i<5;i++)
 {
  c[i]=a[i]*b[i];
 }
 printf("\n\nMultiplication in 3 rd array are=");
 for(i=0;i<5;i++)
 {
  printf("\nc[%d]=",i);
  printf("%d",c[i]);
 }
 getch();
}
