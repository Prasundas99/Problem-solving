//Display Prime Numbers Between Intervals Using Function
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
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    int i;
    for(i= num1 ; i<= num2; i++){
	if(isPrime(i)){
	    printf("%d is a prime number \n" ,i);
	}
    }
	return 0;
}

