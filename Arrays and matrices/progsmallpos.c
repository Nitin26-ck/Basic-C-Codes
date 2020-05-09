#include<stdio.h>
int main()
{
	int n,i,arr[20],small,pos;
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		small=arr[0];
		pos=0;
	}
	for(i=1;i<n;i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
			pos=i;
		}
	}
	printf("the smallest element=%d\n",small);
	printf("the position of smallest element=%d\n",pos);
	return 0;
}


