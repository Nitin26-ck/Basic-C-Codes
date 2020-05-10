#include<stdio.h>
int main()
{
	int i,n,a,b,temp;
	int *p,*q;
	printf("enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	p=&a;
	q=&b;
	temp=*p;
	*p=*q;
	*q=temp;
	printf("values of a and b after swapping are a=%d and b=%d\n",*p,*q);
	return 0;
	}

