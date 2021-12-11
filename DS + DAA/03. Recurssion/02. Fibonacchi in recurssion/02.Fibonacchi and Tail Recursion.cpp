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


/*
Working with variables in recursion:

1. Arguments  -> Will be followed in the next function call
2. Return Type
3. Body of function





Recurssion linearly is not optimised for large scale i.e: if i input 50 it will stuck because of repeated function call this is why recurssion is very inefficient
solution?
DP - Dinamic Programing -> If 2 or more function of recurssion calls are doing same work dont compute it again and again


This is DP + recurssion is very important topic
*/
