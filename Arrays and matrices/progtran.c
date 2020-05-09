#include<stdio.h>
int main()
{
	int m,n,i,j,a[10][10],tran[10][10];
	printf("enter the no of rows and columns of a matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of a matrix\n");
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
			tran[i][j]=a[j][i];
		}
	}
	printf("transpose of matrix is\n");
	for(i=0;i<m;i++)
	{
		printf("\n");
		for(j=0;j<n;j++)
		{
			printf("%d\t",tran[i][j]);
		}
	}

	return 0;
}

