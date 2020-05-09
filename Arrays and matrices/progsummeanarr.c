#include<stdio.h>
int main()
{
	int n,i,a[100];
	float sum=0,mean;

	printf("enter the no of elements of array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	mean=sum/(float)(n);
	printf("sum of all elements of array=%f\n",sum);
	printf("mean of all elements of array=%f\n",mean);
	return 0;
}


