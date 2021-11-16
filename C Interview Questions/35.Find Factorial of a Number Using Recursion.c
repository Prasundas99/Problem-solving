//C Program to Find Factorial of a Number Using Recursion
#include <iostream>
using namespace std;

int printFactorial(int num){
    int fact = 1;
    if(num > 1){
        return num * printFactorial(num-1);
    }else
      return fact;
    
}


int main() {
    int num;
	scanf("%d", &num);
	int fact = printFactorial(num);
	printf("%d", fact); 
	
	return 0;
}
