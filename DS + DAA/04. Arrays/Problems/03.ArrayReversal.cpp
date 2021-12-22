//Array Rotation
#include <iostream>
using namespace std;

int main() {
	int n = 5;
	int a[n] = {1,2,3,4,5};
	int i;
	int start = 0, end = n;
	while(start>end){
	    int temp = a[start];
	    a[start] = a[end];
	    a[end] = temp;
	    start++;
	    end--;
	}
	
	for(i=0;i<n;i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}
