// Reserve array
#include <iostream>
using namespace std;

int main() {
    int size;
    cin>>size;
    
    int arr[size];
    
    for(i=0;i<size;i++){
        cin>>arr[i];
    }
    
    cout<<"Reversed output is: "<<endl;
    for(i=size; i>0 ; i++){
        cout<<arr[i]; //printing array
        
    }
	return 0;
}
