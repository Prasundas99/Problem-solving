//Given an array of numbers  in which every number is repetated except one find that
/*
eg: arr = [2 ,3,4,1,2,1,3,6,4]
ans: 6 
*/
#include <iostream>
using namespace std;

int main() {
	//a^a = 0
	int n = 9;
	int a[n] = {2 ,3,4,1,2,1,3,6,4};
	
	int unique = 0;
	for(int i =0 ; i<n ; i++){
	    unique = unique^a[i];
	}
	
	cout<<unique<<endl;
	
	cout<<"-----------------It is same as--------------------------------"<<endl;
	unique = 0;
	int arr[n] = {2,3,-2,4,-3,-5,7,5,-7};
	for(int i =0 ; i<n;i++){
	    unique = unique + arr[i];
	}
	cout<<unique;
	return 0;
}
