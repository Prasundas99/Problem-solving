//C Program to Display Fibonacci Sequence
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ...
#include <stdio.h>

int main(void) {
	int limit;
	
	printf("Enter the limit upto which series should continue: \n");
	scanf("%d", &limit);
	
	printf("--------------------------\n");
	printf("0,1");
	
	int i,n1 = 1, n2=1, sum;
	for(i=2;i<limit+1;i++){
	    sum = n1 + n2;
        n1 = n2; 
	    n2 = sum;
	    printf(",%d", sum);
	}
	
	return 0;
}

