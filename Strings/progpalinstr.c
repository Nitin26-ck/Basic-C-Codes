#include<stdio.h>
int main()
{
	char s[10];
	int i=0,j,flag=1,l;
	printf("enter a string\n");
	gets(s);
	printf("entered string is %s\n",s);
	while(s[i]!='\0')
	{
		i++;
	}
	l=i;
	i--;
	j=0;
	while(j<l/2)
	{
		if(s[j]!=s[i])
		{
			flag=0;
			break;
		}
		j++;
		printf("j=%d\n",j);
		i--;
	}
	if(flag==1)
		printf("entered string is palindrome\n");
	else
		printf("entered string is not a palindrome\n");
	return 0;
}


