 //Sort an array of 0s, 1s and 2s without any sorting algos
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int j =0 ; j<n ; j++){
        cin>>a[i];
    }
 int one=0,zero=0,two=0,i;
        for(i=0 ; i<n;i++){
            if(a[i] == 0)
                zero++;
            if(a[i] == 1)
                one++;
            if(a[i] == 2)
                two++;
        }
        for(i=0 ; i<n;i++){
            if(i<zero){
                a[i] = 0;
            }
            if(i<(zero+one) && i> zero){
                a[i] = 1;
                
            }
            if(i<(zero+one+two) && i> (zero+one)){
                a[i] = 2;
               
            }
        }
}