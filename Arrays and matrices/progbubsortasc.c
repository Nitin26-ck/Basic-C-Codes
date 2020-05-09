#include<stdio.h>
int main()
{
	int n,i,j,temp,a[10];
	printf("enter the no of elements of array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}


for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
		if(a[j]<a[j-1])
		{
	
	temp=a[j];
	a[j]=a[j-1];
	a[j-1]=temp;
		}
}
	printf("elements of array after sorting are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
	}

