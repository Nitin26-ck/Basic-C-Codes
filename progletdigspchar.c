#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	printf("enter any key\n");

	c= getchar();
	{
		if(isalpha(c)>0)
			printf("entered key is a letter\n ");
		if(isdigit(c)>0)
			printf("entered key is a digit\n");
		if(ispunct(c)>0)
			printf("entered key is punctuation mark\n");
		if(isspace(c)>0)
			printf("entered key is a white space\n");
		else
			printf("any other key is enterd\n");
	}
	return 0;
}

