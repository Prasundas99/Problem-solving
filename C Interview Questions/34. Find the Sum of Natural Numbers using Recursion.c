//C Program to Find the Sum of Natural Numbers using Recursion
#include <stdio.h>

int printNatruralNumbers(a){
    if(a == 10){
        return 0;
    }
    
    printf("%d \n", a);
    printNatruralNumbers(a+1);
}

int main(void) {
	
	printNatruralNumbers(1);
	return 0;
}
