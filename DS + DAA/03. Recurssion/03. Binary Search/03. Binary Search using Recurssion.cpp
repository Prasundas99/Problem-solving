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



//For accending sorted array
int binarySearchUsingRecurssion(int arr[], int start, int end, int target){
    //Start and end has been sent to params bacuse we cannot determine by just a normal counction call as how many time it is called we don't know
    
    // Return -1 if no element matches; hence the condition start>end
    if(start>end){
        return -1;
    }
    
    int mid = start + (end - start) /2;
    
    if(arr[mid] == target)
        return mid;
    
    if(target> arr[mid]){
        start = mid+1;
    }else{
        end = mid-1;
    }  
    //Recurring call
    binarySearchUsingRecurssion(arr , start, end, target);
}



//Another way
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
    //array needs to be sorted
	int a[10] = {-2 , 0 , 5 , 9 , 10, 20 , 66, 69 , 85, 100};
	int target = 69;
	int size = sizeof(a) / sizeof(a[0]);
	int start = 0;
	int answer = binarySearchUsingRecurssion(a ,start,size, target);
	cout<<answer;
	return 0;
}
