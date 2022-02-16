/*
Find Row wise sum of a 2D array
3   4   11  = 18
2  12    1  = 15
7   8    7  = 22

*/

#include <iostream>
using namespace std;

void printSum(int matrix[][3], int matrixSize, int matrixColSize){
for(int i=0;i<matrixSize; i++){
    int sum = 0;
    for(int j=0; j< matrixColSize; j++){
        sum = sum + matrix[i][j];
    }
    cout<<sum<<endl;
}

}

//LargestRowSum
void printLargestRowSum(int matrix[][3], int matrixSize, int matrixColSize){
int maxSum = 0;
for(int i=0;i<matrixSize; i++){
    int sum = 0;
    for(int j=0; j< matrixColSize; j++){
        sum = sum + matrix[i][j];
    }
    if(sum>maxSum)
    maxSum = sum;
}
cout<<maxSum;
}



void printMatrix(int matrix[][3], int matrixSize, int matrixColSize){
for(int i=0;i<matrixSize; i++){
    int sum = 0;
    for(int j=0; j< matrixColSize; j++){
       cout<<matrix[i][j];
    }
    cout<<endl;
}

}


int main() {
	// create 2d array
	int arr[4][3];
	
	//taking input => row wise
	for(int i=0 ; i<4; i++){
	    for(int j=0; j<3; j++){
	        cin>>arr[i][j];
	    }
	}
	
	//printMatrix(arr,3,4);
	
	printSum(arr,4,3);
	return 0;
}


