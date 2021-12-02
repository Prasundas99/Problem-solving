// Working of increment and decrement operators
#include <stdio.h>
int main()
{
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a); 
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);

    return 0;
}
/*
If you use the ++ operator as a prefix like: ++var, the value of var is incremented by 1; then it returns the value.
If you use the ++ operator as a postfix like: var++, the original value of var is returned first; then var is incremented by 1.
*/