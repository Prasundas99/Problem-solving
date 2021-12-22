#include <iostream>
using namespace std;
//swaping values in array
void swapTwoNumber(int a,int b){
    int temp = a;
     a = b;
     b = temp; 
}

int swapThreeNumber(){
    // Store sum of all in a
    a = a + b + c;  // (a = 60)
 
    // After this, b has value of a
    b = a - (b+c);  // (b = 60 – (20+30) =10)
 
    // After this, c has value of b
    c = a - (b+c);  // (c = 60 – (10 + 30) = 20)
 
    // After this, a has value of c
    a = a - (b+c);   //(a = 60 – (10 + 20) = 30)
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
