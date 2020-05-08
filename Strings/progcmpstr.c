#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	int i,j,flag=1;
	printf("enter the first string\n");
	gets(s1);
	printf("enter the second string\n");
	gets(s2);
	i=0;
	j=0;
	while(s1[i]!='\0'||s2[j]!='\0')
	{
		if(s1[i]!=s2[j])
		{
			flag=0;
			break;
		}
		i++;
		j++;
		}
	if(flag==1)
	{
		printf("strings are equal\n");
	}
	else
		printf("srings are unequal\n");
	return 0;
}
	
