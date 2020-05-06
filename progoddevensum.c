#include<stdio.h>
int main()
{
	int n,i,os=0,es=0;
	printf("enter the value of n\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		if((i%2)==0)
			es=es+i;
		else
			os=os+i;
	}
	printf("odd sum=%d\n",os);
	printf("even sum=%d\n",es);
	return 0;
}

