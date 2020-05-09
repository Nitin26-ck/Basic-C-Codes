#include<stdio.h>
int main()
{
	int n,i,a[i],key;
	printf("enter the no of elements\n");
	scanf("%d",&n);
	printf("enter the elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element has to be searched\n");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{

			printf("element %d is located at %d loction\n",key,i+1);
		
			break;
		}
	}
	if(i==n)
	{printf("the key %d is not found\n",key);
	}
return 0;
}


