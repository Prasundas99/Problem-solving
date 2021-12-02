#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    
int c = 0;
        for(i=0;i<n;i++){
            
           if(a[i]<0){
            int temp =  a[c]; 
               a[c++] = a[i];
               a[i] = temp;
           }
        }

    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
	return 0;
}