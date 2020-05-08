#include<stdio.h>
int main()
{
	char s1[100],s2[200],i,j;
	printf("enter a string 1");
	scanf("%s",s1);
	printf("enter a string 2");
	scanf("%s",s2);
	for(i=0;s1[i]!='\0';++i);
	for(j=0;s2[j]!='\0';++j;++i)
	{
		s1[i]=s2[j];
		[i]='\0';
	}
		printf("after concatenation:%s",s2);
		return 0;

}


