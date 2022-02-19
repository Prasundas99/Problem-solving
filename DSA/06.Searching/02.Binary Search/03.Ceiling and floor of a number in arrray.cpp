//ceiling of a given number
/*
Find the smallest number in array that is greater or equal to given number

eg: arr = [2,3,5,9,14,16,18]
ceiling(arr, target=15) = 16
ceiling(arr, target=4) = 5
ceiling(arr, target = 9) = 9 
*/
#include <iostream>
using namespace std;
// 1 3 4 6 7 8 9 10
void ceiling(int arr[], int start,int end,int target){
    int mid;
    while(start<end){
        mid = start + (end-start)/2;
        
        if(arr[mid] == target){
             cout<<"Item found at index"<<mid<<endl;
            break;
        }
        else if(arr[mid] > target)    
            end = mid -1;
        else if(arr[mid] < target)    
            start = mid + 1; 
            
        if(start>=end){
            //ceiling
            cout<<arr[start];
            //floor
            cout<<arr[end];
        }    
    }
}

int main() {
    
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];    
}

int target;
cin>>target;

ceiling(arr, 0, n, target);
	return 0;
}


//47 mins