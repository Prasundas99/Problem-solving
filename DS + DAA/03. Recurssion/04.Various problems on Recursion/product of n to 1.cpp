//Recursion: Print product of n to 1

#include <iostream>
using namespace std;

//approach 1
int print(int n , int c){
    if(n == 1)
        return c;
    c = n*c;
    return print(n-1,c);
}


//approach 2
void fact(int n){
    if(n < = 1)
        return 1;
    return n * fact(n-1);     
}

int main() {
	int n;
	int counter = 1;
	cin>>n;
	int prod =  print(n,counter);

	cout<<prod;

	return 0;
}
