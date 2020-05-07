#include<stdio.h>
int palin();
int main()
{
	int flag=0;
	flag=palin();
	if(flag==1)
		printf("number is palindrome\n");
	else
		printf("number is not a palindrome\n");
}
int palin()
{
	int m,rev=0,digit,num;
	printf("enter a number\n");
	scanf("%d",&num);
	m=num;
	while(num!=0)
	{
		digit=num%10;
		num=num/10;
		rev=rev*10+digit;
	}
	printf("reversed number is %d\n",rev);
	if(m==rev)
		return 1;
	else
		return 0;
}

