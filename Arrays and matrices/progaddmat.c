#include<stdio.h>
int main()
{
	int m,n,i,j,a[10][10],b[10][10],sum[10][10];
	printf("enter the no of rows and columns of first matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of first matrix\n");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the no of rows and columns  of second matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of second matrix\n");
	for(i=0;i<m;i++)
	{ printf("\n");
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}

	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("sum of the matrix elements is\n");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		}
	return 0;
}

