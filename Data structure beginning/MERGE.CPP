#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5]={1,2,3,4,5};
  clrscr();
  int b[5]={6,7,8,9,10};
  int c[10],i,k=0;

  printf("merging of a and b into c\n" );
  for(i=0;i<10;i++)
    {
    if(i<5)
     {
      c[i]=a[i];
     }
    else
     {
      c[i]=b[k];
      k++;
     }
  }
 printf("Elements after merge\n");
 for(i=0;i<10;i++)
 {
  printf("\nc[%d]=",i);
  printf("%d",c[i]);
 }
}
