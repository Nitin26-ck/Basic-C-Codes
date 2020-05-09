#include<stdio.h>
int main()
{
	int m,n,i,j,a[10][10];
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
	
	if(i==j)
	a[i][j]=0;
}
}
 for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}
return 0;
}


