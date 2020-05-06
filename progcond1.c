#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n\n");
	scanf("%d",&n);
	(n>0)?printf("n is positive\n"):((n<0)?printf("n is negative\n"):printf("zero\n"));
		return 0;
}

