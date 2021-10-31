//C Program to Demonstrate the Working of Keyword long
#include <iostream>
using namespace std;

int main() {
	long int a;
	long long int b;
	int c;
	scanf("%li", &a);
	scanf("%lli", &b);
	scanf("%d", &c);
	
	printf("value  of long int var %li \n", a);
	printf("Size of long int %li \n", sizeof(a));
	
	printf("value  of long long int var %li \n", b);
	printf("Size of long long int %li \n", sizeof(b));
	
	printf("value  of int var %d \n", c);
	printf("Size of int %d \n", sizeof(c));
	return 0;
}
