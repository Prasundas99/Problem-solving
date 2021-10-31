//C Program to Swap Two Numbers

#include <iostream>
using namespace std;

int main() {
	int a,b;
	
	printf("Input 2 numbers to swap:");
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("\n You entered 'a' = %d \n 'b'=%d \n ", a,b);
	
	int temp = a;
	a = b;
	b = temp;
	
	printf("You Swapped values \n 'a' = %d \n 'b'=%d \n ", a,b);
	
	
	return 0;
}
