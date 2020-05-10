#include<stdio.h>
int main()
{
 int *p,i[10];
 p=i;
 p[5]=100;
 *(p+5)=100;
 printf("%d,%d\n",p[5],*(p+5));
 return 0;
}

