/*
Basic Euclidean Algorithm for GCD 
The algorithm is based on the below facts. 



If we subtract a smaller number from a larger (we reduce a larger number), GCD doesn’t change. So if we keep subtracting repeatedly the larger of two, we end up with GCD.
Now instead of subtraction, if we divide the smaller number, the algorithm stops when we find remainder 0.
*/
#include <iostream>
using namespace std;

int GCD(int num1 ,int num2){
   if(num1 == 0)
        return num1;
    GCD(num2%num1, num2);    
}


int main() {
	int num1, num2, gcd;
	scanf("%d", &num1);
	scanf("%d", &num2);
	gcd = GCD(num1, num2);

	
	printf(" GCD = %d", gcd);
	return 0;
}
