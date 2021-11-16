// Find nth Fibonacci number 
//When we write recurssion in a formula it is call recurrence relation
#include <iostream>
using namespace std;

int fibo(int n){
   
    if(n<2){
        return n;
    }
    return (fibo(n-2)+fibo(n-1));  //Not a tail recurssion
}

/*
Tail Recursion: A recursive function is said to be tail recursive if the recursive call is the last thing done by the function. There is no need to keep record of previous state

Example: 
void foo(int n){
    if(n == 0){
        return;
    }else{
        cout<<n;
    }.retunr foo(n-1);
}
*/

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int f = fibo(n);
	 
	cout<<f<<endl;;
	return 0;
}
