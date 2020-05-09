#include<stdio.h>
int main()
{
	int n,a[100],i,j,k;
	printf("enter the no of elements in array\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				n--;
				j--;
			}
		}
	}
		
	printf("array obtained after removing duplicate elements is\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	return 0;
}

