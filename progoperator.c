#include<stdio.h>
#include<ctype.h>
int main()
{
	int a,b,c;
	char operator;
	printf("enter any operator\n");
	scanf("%s",&operator);
	printf("enter a and b\n");
	scanf("%d%d",&a,&b);

	switch(operator)
	{
		case '+':
		c=a+b;
		printf("sum=%d\n",c);
		break;
		case '-':
		c=a-b;
		printf("differnce=%d\n",c);
		break;
		case '*':
		c=a*b;
		printf("product=%d\n",c);
		break;
		case '/':
		if(b==0)
		printf("divide by zero error\n");

		else
			c=a/b;
		printf("quotient=%d\n",c);
		break;
		default:
		printf("wrong operator entered\n");
	}
	return 0;
}


