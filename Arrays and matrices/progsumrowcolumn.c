#include<stdio.h>
int main()
{
	int m,n,i,j,a[10][10],sumr=0,sumc=0,sum=0;
	printf("enter the number of rows and columns of a matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sumr=sumr+a[i][j];
		}
	
	printf("sum of %d rows of matrix=%d\n",i,sumr);
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<m;i++)
		{
			sumc=sumc+a[i][j];
		}
	
		printf("sum of %d column of matrix=%d\n",j,sumc);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			 sum=sum+a[i][j];
		}
	}
		printf("sum of array elements=%d\n",sum);
	
	return 0;
}


