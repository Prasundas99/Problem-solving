//Maximum and minimum of an array using minimum number of comparisons
#include <iostream>
using namespace std;

int main() {
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
	    cin>>a[i];
	}
	
	
    max = arr[0], min = arr[0];
 
    // do for each array element
    for (int i = 1; i < n; i++)
    {
        // if the current element is greater than the maximum found so far
        if (arr[i] > max) {
            max = arr[i];
        }
 
        // if the current element is smaller than the minimum found so far
        else if (arr[i] < min) {
            min = arr[i];
        }
    }
	cout<<min<<endl;
	cout<<max<<endl;
	
	
	return 0;
}

