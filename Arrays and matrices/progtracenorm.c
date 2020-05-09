#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j,trace,a[10][10];
	float sum,norm;
	printf("enter the order of matrix\n");
	scanf("%d",&n);
	printf("enter the elements of matrix\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	trace=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			trace=trace+a[i][j];
		}
	}
	sum=0;
	for(i=0;i<n;i++)
	{
			for(j=0;j<n;j++)
			{
				sum=sum+a[i][j]*a[i][j];
				norm=sqrt(sum);
			}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
			}
			}
			printf("trace=%d",trace);
			printf("norm=%f",norm);
			return 0;
			}

