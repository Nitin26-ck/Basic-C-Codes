#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the values of a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	(a>b)&&(a>c)?printf("a is bigger\n"):((b>c)?printf("b is bigger\n"):printf("c is bigger\n"));
	return 0;
}

