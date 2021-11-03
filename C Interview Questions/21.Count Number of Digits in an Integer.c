//    C Program to Count Number of Digits in an Integer
#include <stdio.h>

int main(void) {
	int num;
	
	printf("Enter number to Count number of Digits \n");
	scanf("%d", &num);
	
	int counter = 0;
	while(num!=0){
	int r = num%10;
	num = num/10;
	counter++;
	}
	
	printf("%d", counter);
	return 0;
}

