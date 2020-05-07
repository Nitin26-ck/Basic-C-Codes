#include<stdio.h>
int main()
{
	int i,n,a[1000];
	printf("enter the no of terms to be displayed\n");
	scanf("%d",&n);
	a[0]=1;
	a[1]=1;
	for(i=2;i<n;i++)
	{
		a[i]=a[i-2]+a[i-1];
	}
	printf("first %d terms of fibonacci series is\n",n);
	for(i=0;i<n;i++)
		printf("%5d",a[i]);
	return 0;
}
