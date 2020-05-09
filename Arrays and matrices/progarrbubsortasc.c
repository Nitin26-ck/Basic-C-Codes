#include<stdio.h>
int main()
{
	int n,i,j,a[10],temp;
	printf("enter the no of elements\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements of array before sorting are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	for(i=0;i<n-1;j++)
		if(a[j]<a[j-1])
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
		}
	printf("the elements of array after sorting are\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}

