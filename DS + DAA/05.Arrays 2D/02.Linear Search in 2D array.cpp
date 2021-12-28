
//Linear Search in matrix
#include <iostream>
using namespace std;

//Note We can't take isPResent(int matrix[][]) it will throw error
//Reason: 
/*
Why do we need to specify the column size when passing a 2D array as a parameter?
https://stackoverflow.com/questions/12813494/why-do-we-need-to-specify-the-column-size-when-passing-a-2d-array-as-a-parameter
*/
bool searchMatrix(int matrix[][4], int matrixSize, int matrixColSize, int target){
for(int i=0;i<matrixSize; i++){
    for(int j=0; j< matrixColSize; j++){
        if(matrix[i][j] == target)
            return true;
    }
}
    return false;
}


int main() {
	// create 2d array
	int arr[3][4];
	
	//taking input => row wise
	for(int i=0 ; i<3; i++){
	    for(int j=0; j<4; j++){
	        cin>>arr[i][j];
	    }
	}
	
	if(searchMatrix(arr,3,4, target)){
	    cout<<"found";
	}else{
	    cout<<"Not Found";
	}
	
	return 0;
}
