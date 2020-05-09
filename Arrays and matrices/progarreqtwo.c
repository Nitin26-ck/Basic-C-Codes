#include<stdio.h>
int main()
{
	int n,i,j,a[20],b[10];
	printf("enter the no of elements of array\n");
	scanf("%d",&n);
	printf("enter the elements of first array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the elements of second array\n");
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	if(a[i]==b[j])
	{
		printf("two arrays are equal\n");
	}
	else
	{
		printf("two arrays are not equal\n");
	}
	return 0;
}


