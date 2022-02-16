//Find nth magic number
/*
    5^3  5^2  5^3   Magic number
1 = 0    0    1     5
2 = 0    1    0     25
3 = 0    1    1     30  (5+25)
4 = 1    0    0     125
5 = 1    0    1     130
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int base = 5;
    int ans = 0;
    while(n>0){
        int last = n&1; //will get the last number
        n = n >> 1;
        ans = ans + last*base;
        base = base*5;
    }

    cout<<ans<<endl;
    
	return 0;
}
