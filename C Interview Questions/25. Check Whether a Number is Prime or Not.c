//  C Program to Check Whether a Number is Prime or Not
#include <stdio.h>

int main(void) {
	int num;
	scanf("%d", &num);
	
	int i, flag = 0;
	int m = num/2;
	
	for(i=2; i<= m; i++){
	    if(num % i == 0){
	        flag++;
	        printf("---Prime---");
	        break;
	    }
	}
	
	if(flag==0)
	    printf("Prime  \n");
	else
	    printf("Not prime  \n");
	return 0;
}

