#include<stdio.h>
int main()
{
	int n,i,a[10],key,first,last,mid,flag;
	printf("enter the no of elements\n");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("elements entered\n");
		for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
		
	printf("enter the element has to be searched\n");
	scanf("%d",&key);
	first=0;
	last=n-1;
	mid=(first+last)/2;
	
	while(first<last)
	{
		mid=(first+last)/2;
		if(key>a[mid])
		{
			first=mid+1;
		
		}
	 if(key<a[mid])
		{
			last=mid-1;
		}
		if(key==a[mid])
		{
			flag=1;
			break;

		}
	}
	if(flag==1)
		printf("the element %d is located at %d location\n",key,mid+1);
	else
		printf("the key is not found");
	return 0;
}

