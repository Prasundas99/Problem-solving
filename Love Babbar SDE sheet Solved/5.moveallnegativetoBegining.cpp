//Move all negative numbers to beginning and positive to end with constant extra space
#include <iostream>
using namespace std;

int main() {
    //Bubble sort method
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    
    
int c = 0;
    while(c<n){
        for(i=0;i<n;i++){
            if(a[i]>a[i+1]){
                int temp = a[i+1];
                a[i+1] = a[i];
                a[i] = temp;
            }
        }
        c++;
    }
    
    
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
	return 0;
}
