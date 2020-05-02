#include<stdio.h>
#include<conio.h>
void main()
{
 int a[2][2],b[2][2],c[2][2];
 clrscr();
 int i,j;
 printf("Enter values into first matrix\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("a[%d%d]=",i,j);
   scanf("%d",&a[i][j]);
  }
 }
 printf("\nvalues into 1 st matrix are:");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   {
    printf("\na[%d%d]=",i,j);
    printf("%d",a[i][j]);
   }
 }

printf("\nEnter values into second matrix\n");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
  {
   printf("b[%d%d]=",i,j);
   scanf("%d",&b[i][j]);
  }
 }
 printf("\nvalues into 2nd matrix are:");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   {
    printf("\nb[%d%d]=",i,j);
    printf("%d",b[i][j]);
   }
 }
 printf("\n\nAddition in 3 rd matrix\n");
 for(i=0;i<2;i++)
 {
   for(j=0;j<2;j++)
   {
    c[i][j]=a[i][j]+b[i][j];
   }
 }

 printf("values into 3nd matrix are:");
 for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
   {
    printf("\nc[%d%d]=",i,j);
    printf("%d",c[i][j]);
   }
 }
 getch();
}

