/*
Find Row wise sum of a 2D array
3   4   11  = 18
2  12    1  = 15
7   8    7  = 22

*/

#include <iostream>
using namespace std;



void printMatrix(int matrix[][3], int matrixSize, int matrixColSize){
for(int i=0;i<matrixSize; i++){
    int sum = 0;
    for(int j=0; j< matrixColSize; j++){
       cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}

}


void transposeMatrix(int matrix[][3], int matrixSize, int matrixColSize){
for(int i=0;i<matrixSize; i++){
    int sum = 0;
    for(int j=0; j< matrixColSize; j++){
       cout<<matrix[j][i]<<" ";
    }
    cout<<endl;
}

}


void rotateMatrix(int matrix[][3], int matrixSize, int matrixColSize){
    
}

int main() {
	// create 2d array
	int arr[4][3];
	
	//taking input => row wise
	for(int i=0 ; i<3; i++){
	    for(int j=0; j<3; j++){
	        cin>>arr[i][j];
	    }
	}
	
	//printMatrix(arr,3,4);
	
	printMatrix(arr,3,3);
	cout<<endl;
	cout<<"--------------------------------------------"<<endl;
	transposeMatrix(arr,3,3);
	return 0;
}


