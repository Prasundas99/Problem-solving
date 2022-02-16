//Recursion: Sum of digits

#include <iostream>
using namespace std;

//approach 1
int sum(int n , int s){
    if(n == 0)
        return s;
    s = s + (n%10);
    n = n/10;
    return sum(n,s);
}


//approach 2
void sumOfDigits(int n){
     if(n == 0)
        return 0;
        
    return (n%10)+ sumOfDigits(n/10)    
}

int main() {
	int n;
	int s = 0;
	cin>>n;
	int sumOfDigit =  sum(n,s);

	cout<<sumOfDigit;

	return 0;
}
