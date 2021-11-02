// C Program to Calculate the Power of a Number

//ERROR: SIGSEGV is an error(signal) caused by an invalid memory reference or a segmentation fault.
#include <stdio.h>
#include <math.h>

int main() {
    int num, power, result;
    
    scanf("%d %d", &num, &power);
    
    result = pow(num, power);
    
    printf("%d", result);
	return 0;
}

