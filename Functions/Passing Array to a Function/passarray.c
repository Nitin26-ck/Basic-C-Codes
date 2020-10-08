#include<stdio.h>

int add(int arr[])
{
	return (arr[0]+arr[1]+arr[2]+arr[3]); 
}

int main()
{
int myarray[4] = {10,20,30,40}; //Declaring & initializing array as local data structure	
int res; 

res = add(myarray); //Passing array as parameter to function. NOTE: Array name is passed.  
printf("\n Result: %d",  res); 
printf("\nPrinting result within printf statement itself: Result is %d ", add(myarray)); 
}//end of main 

