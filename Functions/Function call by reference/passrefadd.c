
#include <stdio.h>
 
/* function declaration */
int add(int *, int *); //Prototype Declaration 
 
int main () {

   /* local variable definition */
   int a = 100;
   int b = 200;
 
    
   /* calling a function to add the values.
      * &a indicates pointer to a ie. address of variable a and 
      * &b indicates pointer to b ie. address of variable b.
   */
   int res = add(&a, &b); //Function Call by Reference 
 
   printf("After add, value of res : %d\n", res );
   
 
   return 0;
}

int add(int *x, int *y) {
   
  
   return(*x + *y);
}
