#include<stdio.h>
void gcd_lcm(int m,int n);
int main()
{
	int x,y;
	printf("enter two numbers\n");
	scanf("%d%d",&x,&y);
	gcd_lcm(x,y);
}
void gcd_lcm(int m,int n)
	{
		int p,q,gcd,lcm,r;
		p=m;
		q=n;
		while(n!=0)
		{
			r=m%n;
			m=n;
			n=r;
		}
		gcd=m;
		lcm=p*q/gcd;
		printf("gcd of %d and %d =%d\n",p,q,gcd);
		printf("lcm of %d and %d =%d\n",p,q,lcm);
	}


