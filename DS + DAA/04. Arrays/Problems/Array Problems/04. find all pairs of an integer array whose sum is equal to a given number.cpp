//find all pairs of an integer array whose sum is equal to a given number
#include <iostream>
using namespace std;

//Finding larget pair
void findSum(int arr[], int n, int num){
    int maxSum = num;
    int currSum = arr[0];
    int count = 0;
    for(int i=1;i<n;i++){
        currSum = currSum + arr[i];
        if(maxSum < currSum)
            currSum = 0;
        if(maxSum == currSum)    
            count++;
    cout<<count<<endl;        
    }
}


findSumBruteForce(int arr[], int n, int num){
    int count = 0;
    for(int i=0; i<n;i++){
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == sum)
                count++;
    }
    cout<<count;
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i< n ; i++){
	    cin>>arr[i];
	}
	int num;
	cin>>num;
    findSum(arr,n,num);
	return 0;
}
