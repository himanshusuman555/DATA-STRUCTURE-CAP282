#include<stdio.h>
#include<conio.h>
void main()
{
 int a[50]={2,17,23,34,56,61,69,78,84,91,98};
 int i,mid,low,high,n=11,key,found=0;
 clrscr();
 printf("Elements into array are\n");
 for(i=0;i<n;i++)
 {
  printf("\na[%d]=",i);
  printf("%d",a[i]);
 }

 printf("\nEnter key element\n");
 scanf("%d",&key);
 low=0;
 high=n-1;
 while(low<=high)
 {
	  mid=(low+high)/2;
	  if(key<a[mid])
	  {
	   high=mid-1;
	  }

	   else if(key>a[mid])
	   {
	    low=mid+1;
	   }

	   else if(key==a[mid])
	   {
	      printf("found @ location %d",mid);
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