//Find the Size of int, float, double and char
#include <iostream>
using namespace std;

int main() {
	int a;
	float b;
	double c;
	char d;
	
	printf("Size of int %zu  \n",sizeof(a));
	printf("Float %zu  \n",sizeof(b));
	printf("Double %zu \n", sizeof(c));
	printf("Character %zu \n",sizeof(d));
	return 0;
}
