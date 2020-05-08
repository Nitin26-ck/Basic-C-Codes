#include<stdio.h>
#include<string.h>
int main()
{
	char s[10],s1[10],s2[10],s3[10];
	printf("enter string\n");
	gets(s);
	printf("enter s1\n");
	gets(s1);
	strcpy(s,s1);
	printf("copied string=%s\n",s1);
	printf("enter s2\n");
	gets(s2);
	strcmp(s,s2);
{
	if(s2==s)
		printf("two strings are equal\n");
	else
		printf("strings are unequal\n");
}
	printf("enter s3\n");
	gets(s3);
	strcat(s,s3);
	printf("concatenated string=%s\n",s);
	if(strstr(s,s3)==NULL)
	printf("substring not found\n");
	else
	printf("substring found\n");
	return 0;
	}
