//Insertion in array // Travresal in array
#include<stdio.h>
#include<conio.h>
int main()
{
 int a[5],i;
 clrscr();
 printf("Enter values into array\n");
 for(i=0;i<=4;i++)
 {
  printf("a[%d]=",i);
  scanf("\n %d=",&a[i]);
 }

 printf("Your elements are :");
 for(i=0;i<=4;i++)
 {
  printf("\na[%d]=",i);
  printf(" %d",a[i]);
 }

 getch();
}
