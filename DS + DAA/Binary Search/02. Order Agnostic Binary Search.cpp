//Order Agnostic Binary Search
#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    //Find weather an array is sorted in assending or decending
    bool isAsending = arr[0] < arr[size-1];
    
   int start=0, end = size-1;
   
   while(start<=end){
       int mid = start+(end - start) /2;
   
       if(target == arr[mid]){
           return mid;
       }
       if(isAsending){
           if(target < arr[mid])
                end = mid-1;
            else
                start = mid+1;
       }else{ 
           if(target < arr[mid])
                start = mid+1;
            else
                end = mid-1;
       }
       
   }
   return -1;
}

int main() {
	//Declaring Size of array
	int n , target;
	cout<<"Enter Size of array"<<endl;
    //inputting size
	cin>>n;
	//Initializing array
	int arr[n];
    //taking input
	for(int i=0 ; i<n;i++){
	    cin>>arr[i];
	}
	
	cout<<"Enter element to search"<<endl;
	cin>>target;
	
	int ans =  binarySearch(arr, n , target);
	cout<<ans<<endl;
	return 0;
}
