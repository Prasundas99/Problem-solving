#include <iostream>
using namespace std;

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


int main() {
	int num1;
	scanf("%d", &num1);

	if(isPrime(num1)){
	    printf("%d is a prime number \n" ,i);
	}
	return 0;
}
