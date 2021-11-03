//   C Program to Check Whether a Number is Palindrome or Not
#include <stdio.h>

int main(void) {
	int num, checkNum=0;
	
	scanf("%d", &num);
	
	int temp = num;
	while(temp != 0){
	    checkNum =   (checkNum*10) +(temp%10);
	    temp = temp/10;
	}
	
	if(checkNum == num)
	    printf("Pallindrome");
	else
	    printf("Not Pallindrome")
	
	return 0;
}

