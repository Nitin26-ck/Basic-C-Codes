#include<stdio.h>
int main()
{
 int i=0,sum=0,n,a[20];
 int *p;
 printf("enter the size of array\n");
	 scanf("%d",&n);
 printf("enter the array elemets\n");
 for(i=0;i<n;i++)
 {
	 scanf("%d",&a[i]);
 }
 p=a;
 for(i=0;i<n;i++)
 {
	 sum=sum+(*p);
	 p++;
 }
 printf("sum of elements of array=%d\n",sum);
 return 0;
}

 

