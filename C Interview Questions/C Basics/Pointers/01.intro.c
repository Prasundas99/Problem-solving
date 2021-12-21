#include <stdio.h>
int main()
{
  //Addresses in C  
  int var = 5;
  //outputing the value of var
  printf("var: %d\n", var);

  // Notice the use of & before var
  printf("address of var: %p \n", &var);  

//Pointers
  // Syntax
  int *p;

//Types
int    *ip;    // pointer to an integer
double *dp;    // pointer to a double
float  *fp;    // pointer to a float
char   *ch     // pointer to character

  //Assigning address to pointer
  p = &var;

  //Get value of thing Pointed by pointers
    //To get the value of the thing pointed by the pointers, we use the * operator.
  printf("Value of var pointed by pointer: %d \n", *p);  
  /*
  the above example, pc is a pointer, not *pc. You cannot and should not do something like *pc = &c;
   By the way, * is called the dereference operator (when working with pointers). It operates on a pointer and gives the value stored in that pointer.
  */

    //Changing Value pointed by pointer
    var = 1;
      printf("changed value: %d \n", *p);  //Output: 1;
      /*
      We have assigned the address of c to the pc pointer.
      Then, we changed the value of c to 1. Since pc and the address of c is the same, *pc gives us 1.
      */




     //Example 1
     int* pc, c, d;
     c = 5;
     d = -15;

     pc = &c; printf("Example 1 output of c: %d \n", *pc); // Output: 5
     pc = &d; printf("Example 1 output of d: %d \n", *pc); // Ouptut: -15 
  return 0;
}