//Given a number if it is odd or even
/*
Every no is valuated in binary from internally

so when a number is & with 1 we get last digit
in every binary odd number ends with 1

ie. 2 = 10
    3 = 11
    8 = 100
    9 = 101
    
    when & with 1
    
    0011 -> Last digit is known as LSB = Last significant Bit
  & 0001
----------
    0001    
*/
#include <iostream>
using namespace std;

int main() {
    int n;
	cin>>n;
	if(n & 1 == 1){
	    cout<<"Odd";
	}else{
	    cout<<"Even";
	}
	return 0;
}
