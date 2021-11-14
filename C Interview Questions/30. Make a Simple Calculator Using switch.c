// Make a Simple Calculator Using switch
#include <stdio.h>

int main(void) {
	char operator;
	int num1, num2;
	
	scanf("%c", &operator);
	scanf("%d %d", &num1, &num2);
	
	switch(operator){
	    case '+':
	        printf("%d + %d = %d", num1 , num2, num1+num2);
	        break;
	    case '-':
	        printf("%d - %d = %d", num1 , num2, num1-num2);
	        break;
	    case '*':
	        printf("%d * %d = %d", num1 , num2, num1*num2);
	        break;
	    case '/':
	        printf("%d / %d = %d", num1 , num2, num1/num2);	 
	        break;
	    case '%':
	        printf("%d % %d = %d", num1 , num2, num1%num2);
	        break;
	    default:
	        printf("Something went wrong");
	}
	
	return 0;
}

