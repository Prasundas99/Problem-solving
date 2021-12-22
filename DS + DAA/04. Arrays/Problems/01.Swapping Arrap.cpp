/*
Input: arr[] = { 1, 2, 3, 4, 5 } 
Output: 2 1 5 3 4 
Explanation: 
Adjacent elements are swapped as follows: 
(1, 2 -> 2, 1) 
(3, 4, 5 -> 5, 3, 4)
Input: arr[] = {1, 2, 3, 4} 
Output: 2 1 4 3 
Explanation: 
Adjacent elements are swapped as follows: 
1, 2 -> 2, 1 
3, 4 -> 4, 3
*/

#include <iostream>
using namespace std;
//swaping values in array
void swapTwoNumber(int a,int b){
    int temp = a;
     a = b;
     b = temp; 
          cout<<a<<" "<<b;
}


int swapThreeNumber(int a, int b, int c){
    // Store sum of all in a
    a = a + b + c;  
 
    // After this, b has value of a
    b = a - (b+c);  
 
    // After this, c has value of b
    c = a - (b+c);  
 
    // After this, a has value of c
    a = a - (b+c);   
}

int main() {
	int a[5] = {1,2,3,4,5};
	for(int i=0; i<4; i++){
	    swapTwoNumber(a[i], a[i+1]);
	}
	
	for(int i=0; i<5; i++){
	    cout<<a[i]<<endl;
	}
	
	return 0;
}
