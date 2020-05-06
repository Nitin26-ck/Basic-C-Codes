#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,m6;
	float M;
	printf("enter the values of m1,m2,m3,m4,m5,m6\n");
	scanf("%d%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5,&m6);
	M=(m1+m2+m3+m4+m5+m6)/6;
	if((m1<=40)||(m2<=40)||(m3<=40)||(m4<=40)||(m5<=40)||(m6<=40))
		printf("grade F\n");

	else if(M>=90)
		printf("grade S\n");
	else if((M>=75)&&(M<90))
		printf("grade A\n");
	else if((M>=60)&&(M<75))
		printf("grade B\n");
	else if((M>=50)&&(M<60))
		printf("grade C\n");
	else if((M>=40)&&(M<50))
		printf("grade D\n");
	else
		printf("grade F\n");
	return 0;
}

