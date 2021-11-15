//    C Program to Check Whether a Number can be Expressed as Sum of Two Prime Numbers
#include <stdio.h>

int isPrime(int num){
    int j;
    int m = (num/2)+1;
    int flag = 1;
    for(j=2;j<m; j++){
        if(num % j == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main(void) {
	
	int num ;
	scanf("%d",&num);
	
	int i, flag = 1;
	for(i=0; i<num/2; i++){
	    if(isPrime(i)){
	        if(isPrime(num-i)){
	            printf("%d + %d = %d", i, num-i , num);
	            flag = 0;
	        }
	    }
	}
	
	if(flag){
	    printf("%d cannot be expressed as the sum of two prime numbers.", num);
	}
	
	return 0;
}

