/*
Find the number if it is power of 2
only one 1 should be there in binary form
*/
#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	bool ans = n & (n-1) == 0;
	
	cout<<ans;
	return 0;
}