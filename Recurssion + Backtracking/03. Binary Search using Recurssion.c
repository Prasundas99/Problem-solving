// Binary Search in Recursion
// Recurrence Relation:  F(N) = O(1) (For comparisn) + F(N/2) (Dividing array into half)

/*
Types of Recurrence relation:
Linear -- Fibonacci number
Divide and concure -- Binary search 
*/
#include <iostream>
using namespace std;

int search(int arr[],int target,int s,int e){
    if(s>e){
        return -1;
    }
    int m = s+(e-s)/2;
    if(arr[m] == target){
        return m;
    }
    if(target < arr[m]){
        return search(arr, target, s, m-1);
    }
    return search(arr,target,m+1, e);
}


int main() {
	int arr[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 55 ,88, 69};
	int target = 4;
	int ans = search(arr, target, 0,9);
	cout<<ans;
	return 0;
}
