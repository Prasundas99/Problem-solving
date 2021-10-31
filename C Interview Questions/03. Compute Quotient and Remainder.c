//C Program to Compute Quotient and Remainder

#include <iostream>
using namespace std;

int main() {
	
	int a,b;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	int Quotient, Remainder;
	
	Quotient = a/b;
	Remainder = a%b;
	
	printf("Quotient: %d   \n", Quotient);
	printf("Remainder : %d", Remainder);
	
	
	return 0;
}
