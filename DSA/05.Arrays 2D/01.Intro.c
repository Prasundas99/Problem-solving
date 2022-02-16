#include <iostream>
using namespace std;

int main() {
	// create 2d array
	int arr[3][4];
	
	//taking input => row wise
	for(int i=0 ; i<3; i++){
	    for(int j=0; j<4; j++){
	        cin>>arr[i][j];
	    }
	}
	
/*
//taking input => col wise
	for(int i=0 ; i<4; i++){
	    for(int j=0; j<3; j++){
	        cin>>arr[i][j];
	    }
	}
*/
	//print
	for(int i=0; i <3; i++){
	    for(int j=0; j<4; j++){
	        cout<< arr[i][j]<<" ";
	    }
	    cout<<endl;
	}
	
	//For storing data
	int a[3][4]= {1,2,3,4,5,6,7,8,9,10,11,12};  //Will support 12 element 3X4 elemnt will be inputted rowwise
	a[3][4] = {{1,1,1,1},{2,2,2,2},{1,1,1,1},{2,2,2,2}},
	return 0;
}
