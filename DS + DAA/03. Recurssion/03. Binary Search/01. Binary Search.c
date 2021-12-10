#include <iostream>
using namespace std;

//return the index
//return  -1 if index does not exist
int binarySearch(int arr[], int target){
    int start = 0;
    int end = sizeof(arr);
    while(start<=end){
        //find middle element
    //    int mid = (start+end)/2  // might possible that (start+end) exceeds the limit of the size of int type
    int mid = start + (end-start)/2;
    /*
    In simple maths
    start + (end-start)/2
    2 start + end - start /2 
    start + end / 2
    */
    int mid = start + (end - start) / 2;
    }
}


int main() {
	
	return 0;
}
