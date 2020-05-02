#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20]={20,34,45,56,63,73,85,93};
 int i,ele,n=8,pos,found=0;
 clrscr();
 printf("Elements in the array are:");
 for(i=0;i<8;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }

 printf("\nEnter element to be searched\n");
 scanf("%d",&ele);

 for(i=0;i<8;i++)
 {
  if(ele==a[i])
  {
   printf("Element found at position %d",i+1);
   found=1;
   break;
  }
 }
 if(found==0)
 {
  printf("Element not found");
 }
getch();
}
