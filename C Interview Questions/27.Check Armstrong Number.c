// C Program to Check Armstrong Number
#include <stdio.h>

int main(void) {
    int num;
	scanf("%d", &num);
	
	int sum = 0, r;
	while(num != 0){
	    r = num%10;
	    sum = sum + (r*r*r);
	    num = num /10;
	}
	
	if(sum == num ){
	    printf("Armstrong number");
	}else{
	    printf("Not Armstrong number");
	}
	
	return 0;
}

