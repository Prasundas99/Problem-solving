//Display Factors of a Number
#include <stdio.h>

int main(void) {
	int num;
	
	scanf("%d", &num);
	
	int i;
	for(i = 2; i<num; i++){
	    if(num%i == 0)
	        printf("%d is a factor of %d", i, num);
	}
	return 0;
}

