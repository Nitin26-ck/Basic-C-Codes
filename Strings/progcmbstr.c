#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10],s3[20];
	int i,j;
	printf("enter the string 1\n");
	gets(s1);
	printf("enter the string 2\n");
	gets(s2);
	i=0;
	while(s1[i]!='\0')
	{
		s3[i]=s1[i];
		i++;
	}
	j=0;
	while(s2[j]!='\0')
	{
		s3[i]=s2[j];
		i++;
		j++;
	}
	s3[i]='\0';
	printf("new string is %s\n",s3);
	return 0;
}

