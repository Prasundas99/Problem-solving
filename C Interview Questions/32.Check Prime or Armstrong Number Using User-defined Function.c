//C Program to Check Prime or Armstrong Number Using User-defined Function
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

int isArmstrong(int num){
    int temp = num;
    int sum=0;
    while(temp != 0){
     int r =  temp %10;
     sum = sum + (r*r*r);
     temp = temp/10;
    }
    
    if(num == sum)
        return 1;
    else
        return 0;
    
}

int main(void) {
    int num;
    
    scanf("%d",&num);
    

    if(isPrime(num) && isArmstrong(num))
        printf("%d is Both armstrong and prime number", num);

	else if(isPrime(num)){
	    printf("%d is a prime number \n" ,num);
	}
    else if(isArmstrong(num))
        printf("%d is an Armstrong number \n", num);
	return 0;
}

