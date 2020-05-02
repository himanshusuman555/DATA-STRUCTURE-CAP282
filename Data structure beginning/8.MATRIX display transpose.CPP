#include<stdio.h>
#include<conio.h>
void main()
{
 int a[3][3],i,j;
 clrscr();
 printf("Enter values into matrix\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf("a[%d,%d]=",i,j);
   scanf("%d",&a[i][j]);
  }
  printf("\n");
 }
 printf("MAtrix display\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf(" %d",a[i][j]);
  }
  printf("\n");
 }
 printf("transpose of matrix\n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   printf(" %d",a[j][i]);
  }
  printf("\n");
 }
}




