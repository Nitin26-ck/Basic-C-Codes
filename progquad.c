#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,x1,x2,r1,r2;
	printf("enter a,b,c\n");
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b)-(4.0*a*c);
	if(d==0)
	{
		printf("roots are real and equal\n");
	x1=-b/2.0*a;
	x2=x1;
	printf("roots are %f and %f\n",x1,x2);
	}
	else if(d>0)
	{	printf("roots are real and distinct\n");
	x1=(-b+sqrt(d))/2.0*a;
	x2=(-b-sqrt(d))/2.0*a;
	printf("the roots x1=%f and x2=%f\n",x1,x2);}
	else
	{	printf("roots are imaginary\n");
	r1=-b/2.0*a;
	r2=sqrt(fabs (d))/2.0*a;
	x1=r1+r2;
	x2=r1-r2;
	printf("roots are x1=%f+i%f and x2=%f-i%f\n",r1,r2,r1,r2);
	}
	return 0;
}
