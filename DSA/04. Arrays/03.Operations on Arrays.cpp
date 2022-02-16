/*
Following are the basic operations supported by an array.

Traverse − print all the array elements one by one.

Insertion − Adds an element at the given index.

Deletion − Deletes an element at the given index.

Search − Searches an element using the given index or by the value.
*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0; i<n;i++){
	    cin>>arr[i];
	}
	//Traversing array
	for(int i=0; i<n; i++){
	    cout<<arr[i]<<endl;
	}
	
	
	
	//Insertion
	//Add element at given index
	int a[10] = {9,19,29,39,49,59,69,79};
    int k;
	cin>>k;
	int position;
	cin>>position;
	
	int n=10, i=0;
	for(i=n;i>position;i--){
	    a[i] = a[i-1];
	}
	a[position] = k;
	
	//Traversing array
	for(int i=0; i<n; i++){
	    cout<<a[i]<<endl;
	}
	
	
	//Deletion
	//Delete element at given index
	int a[10] = {9,19,29,39,49,59,69,79};
	int position;
	cin>>position;
	
	int n=10, i=0;
	for(i=position;i<n;i++){
	    a[i] = a[i+1];
	}

	//Traversing array
	for(int i=0; i<n; i++){
	    cout<<a[i]<<endl;
	}
	
	
	//Search an element at given index
	int b[10] = {1,2,3,4,5,6,7,8,9,10};
	int n = 10;
	int search;
	cin>>search;
	
	for(int i=0; i<n; i++){
	    if(b[i] == search){
	        cout<<"Found Index is:"<<i;
	        break;
	    }
	}
	
	return 0;
}


/*
○	Arrays vs other DS
i.e LinkedList and Array :  https://www.geeksforgeeks.org/linked-list-vs-array/

*/