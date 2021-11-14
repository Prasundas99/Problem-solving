// C Program to Display Armstrong Number Between Two Intervals

#include <stdio.h>

int main(void) {
	int num1 , num2;
	
	scanf("%d %d", &num1, &num2);
	int i;
	for(i= num1; i<= num2; i++ ){
        int temp = i;
	    int sum = 0, r;
    	while(temp != 0){
    	    r = temp%10;
    	    sum = sum + (r*r*r);
    	    temp = temp /10;
    	}
    	if(sum == i )
    	    printf("%d Armstrong number \n", i);
    }
	
	return 0;
}

