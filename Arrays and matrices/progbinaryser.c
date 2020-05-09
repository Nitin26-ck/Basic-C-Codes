#include<stdio.h>
int main()
{
	int n,i,low,high,mid,key,a[10];
	printf("enter the size of array\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the number to be searched\n");
	scanf("%d",&key);
	low=1;
	high=n;
	do
	{
		mid=(low+high)/2;
		if(a[mid]<key)
			low=mid+1;
		if(a[mid]>key)
			high=mid-1;
	}
	while(key!=a[mid]&&(low<=high));
	if(a[mid]==key)
		printf("key is found at %d\n",mid+1);
	else
		printf("key not found\n");
return 0;
}
