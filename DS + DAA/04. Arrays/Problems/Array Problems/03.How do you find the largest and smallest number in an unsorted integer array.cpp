//How do you find the largest and smallest number in an unsorted integer array
#include <iostream>
using namespace std;

void findMinMax(int arr[], int n){
    int min = arr[0];
    int max = arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    
    cout<<max<<"MAX"<<endl;
    cout<<min<<"MIN"<<endl;
}

int main() {
int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i< n ; i++){
	    cin>>arr[i];
	}
    
    findMinMax(arr,n);
	
	return 0;
}
