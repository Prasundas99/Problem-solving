#include <stdio.h> //#include <stdio.h> includes the standard input output library functions.
                  //The printf() function is defined in stdio.h .

int main(void) { //The main function  it is the entry point of every program
	//output
	printf("Hello World");
	
	//Input data in C
	int a; //demo var to take input
    
    scanf("%d", &a); //Inputting data and allocating memory
    printf("%d",a);  //Outputting data with allocated memory
	
	return 0;  //The return 0 statement, returns execution status to the OS. The 0 value is used for successful execution and 1 for unsuccessful execution.
}

