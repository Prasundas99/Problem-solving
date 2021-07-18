// Maximum and minimum of an array using minimum number of comparisons

#include <iostream>
using namespace std;

int main() {
    int size,i;
    cin>>size;
    
    int arr[size];
    
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    
    int k;
    cin>>k;
   
    //bouble sort
    int counter=0;
  while(counter<size){
        for(i=0;i<size-1;i++){
            if(arr[i]> arr[i+1]){
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
            counter++;
        }
        
    }   
    
    int smallest = arr[k];
    int largest = arr[size-k];
    
    cout<<"Kth largest: "<< largest<<endl;
    cout<<"Kth smallest element: " << smallest<<endl;
    
    
    for(i=0 ; i<size;i++){
        cout<<arr[i]<<endl;
    }
    
	// your code goes here
	return 0;
}

//Time complexity o(n sq)
