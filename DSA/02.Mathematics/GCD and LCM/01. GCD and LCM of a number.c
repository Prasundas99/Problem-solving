//GCD and LCM

#include <iostream>
using namespace std;

int GCD(int num1 ,int num2){
   int  gcd = 1;
    for(int i=2; i<num1 && i<num2; i++){
        if(num1%i == 0 && num2%i==0){
            gcd = 1;
        }
    }
    return gcd;
}

int LCM(int num1 ,int num2, int gcd){
    int lcm;
    lcm = (n1 * n2) / gcd;
    return lcm;
}

int main() {
	int num1, num2, gcd, lcm;
	scanf("%d", &num1);
	scanf("%d", &num2);
	gcd = GCD(num1, num2);
	lcm = LCM(num1, num2, gcd);
	
	
	printf("The LCM : %d , GCD = %d", lcm, gcd);
	return 0;
}
