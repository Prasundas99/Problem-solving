//C Program to Find GCD of two Numbers

/*The HCF or GCD of two integers is the largest integer that can exactly divide both numbers (without a remainder).*/
// Error SIGFPE == error in logical operation i.e 2/0
#include <stdio.h>

int main(void) {
    int n1 , n2;
    printf("Enter 2 number to find HCF between them");
    scanf("%d %d", &n1, &n2);
    
    int i, gcd = 0;
    for(i=1; i<=n1 && i<= n2; i++){
        if(n1%i == 0 && n2%i == 0)
            gcd = i;
    }
	
	printf("\n GDC is %d", gcd);
	return 0;
}

