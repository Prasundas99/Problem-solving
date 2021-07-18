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
    
   int max , min;
   
     min = max=arr[0];
     for(i=1;i<size;i++){
         if(min>arr[i]){
             min = arr[i];
         }
         if(max<arr[i]){
             max = arr[i];
         }
     }
    
    cout<<"Maximum is:"<<max<<endl;
    cout<<"Minimum is:"<<min<<endl;
    
    
	// your code goes here
	return 0;
}
