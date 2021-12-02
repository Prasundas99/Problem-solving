/*
Test Cases:
        // one missing number
        printMissingNumber(new int[]{1, 2, 3, 4, 6}, 6);
 
        // two missing number
        printMissingNumber(new int[]{1, 2, 3, 4, 6, 7, 9, 8, 10}, 10);
 
        // three missing number
        printMissingNumber(new int[]{1, 2, 3, 4, 6, 9, 8}, 10);
 
        // four missing number
        printMissingNumber(new int[]{1, 2, 3, 4, 9, 8}, 10);
*/
#include <iostream>
using namespace std;

//Approach 1
void printMissingNumberBruteForce(int n, int a[]){
    for(int i=0; i < n ; i++){
        if(i+1 != a[i])
            cout<<i+1<<" Missig";
    }
}

//Approach 2
//This method uses the technique of XOR to solve the problem.  
void printMissingNumberUsingXOR(int n, int a[]){
    // For xor of all the elements in array
    int x1 = a[0];
 
    // For xor of all the elements from 1 to n+1
    int x2 = 1;
 
    for (int i = 1; i < n; i++)
        x1 = x1 ^ a[i];
 
    for (int i = 2; i <= n + 1; i++)
        x2 = x2 ^ i;
 
    return (x1 ^ x2);
}



int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i< n ; i++){
	    cin>>arr[i];
	}

	printMissingNumberBruteForce(n , arr);
	printMissingNumberUsingXOR(n,arr);
	return 0;
}
