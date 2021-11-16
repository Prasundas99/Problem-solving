//Find G.C.D Using Recursion
#include <stdio.h>

int getGCD(int n1,int n2){
if (n2 != 0)
        return getGCD(n2, n1 % n2);
    else
        return n1;
}

int main(void) {
	int num1,num2;
	scanf("%d %d", &num1, &num2);
	int hcf = getGCD(num1, num2);
	printf("%d", hcf);
	return 0;
}

