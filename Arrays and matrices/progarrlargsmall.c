#include<stdio.h>
int main()
{
	int i,n,a[100],small,large,pos;
	printf("enter the no of elements of array\n");
	scanf("%d",&n);
	printf("enter the elements of the array\n");
	for(i=0;i<n;i++)
	
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		small=a[0];
		pos=0;
	}
	for(i=1;i<n;i++)
	{
		if(a[i]<small)
		{
			small=a[i];
			pos=i;
		}
	}
	{
	printf("smallest element of array=%d\n",small);
	printf("position of the smallest element=%d\n",pos);
	}
	for(i=0;i<n;i++)
	
	{
	
		large=a[0];
		pos=0;
	}
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
			pos=i;
		}
	}
	{
	printf("largest element of array=%d\n",large);
	printf("position of the largest element=%d\n",pos);
	}
	return 0;
}

