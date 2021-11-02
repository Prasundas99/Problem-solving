//    C Program to Reverse a Number
#include <stdio.h>

int main(void) {
	int num, revNum=0;
	
	scanf("%d", &num);
	
	while(num!=0){
	    int r = num%10;
	    revNum = revNum *10 + r;
	    num = num/10;
	}
	
	printf("%d", revNum);
	return 0;
}

