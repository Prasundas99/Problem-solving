//C Program to Find Factorial of a Number
#include <stdio.h>

int main() {
	int num,i, result=1;
	
	scanf("%d", &num);
	
	for(i=1;i<num+1;i++){
	    result = result*i;
	}
	
	printf("%d", result);
	
	return 0;
}