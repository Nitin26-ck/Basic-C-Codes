
#include<stdio.h>
int i, j; //Global Variables

int addlocal(int x, int y)
{
	return (x + y); 
}
int addglobal( )
{
	return (i + j); 
}
 

int main()
{
int a, b; int res; //Local Variables 
a = 10; b = 20;
i = 100; j = 200; 
res = addlocal(a, b); //Function Call - Local Variables - parameter passing 

res = addglobal();//Function Call - Global Variables - no need for parameter passing 

printf("\n ***** //FUNCTION CALL BY VALUE - LOCAL VARIABLES ****");  
printf("\n Result: %d",  res); 
printf("\nPrinting result within printf statement itself: Result is %d ", addlocal(a, b)); 

printf("\n ***** //FUNCTION CALL - GLOBAL VARIABLES ****");  
printf("\n Result: %d",  res); 
printf("\nPrinting result within printf statement itself: Result is %d ", addglobal()); 

}

