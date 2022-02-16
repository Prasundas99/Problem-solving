//Check binary search section for pdf

#include <iostream>
using namespace std;

//return the index
//return  -1 if index does not exist
int binarySearch(int arr[], int target, int size){
    int start = 0;
    int end =  size;
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
    
    if(target>arr[mid]){
        start = mid+1;
    }else if(target<arr[mid]){
        end = mid -1;
    }else{
        //answer found
        return mid;
    }
    }
    return -1;
}


int main() {
    //array needs to be sorted
	int a[10] = {-2 , 0 , 5 , 9 , 10, 20 , 66, 69 , 85, 100};
	int target = 69;
	int size = sizeof(a) / sizeof(a[0]);
	int answer = binarySearch(a , target, size);
	cout<<answer;
	return 0;
}
