//Search in 2D array
#include <iostream>
using namespace std;


int search(int a[5][5], int target){
    for(int row = 0 ; row<5; row++){
        for(int col =0; col<5; col++ ){
            if(a[row][col] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main() {
int a[5][5] = {
    {23,4,3},
    {18,12,17,3},
    {78,89,34,55},
    {18,22},
    {1,2,3,4,5}
};

int target= 50;

int isFound = search(a, target) ;
if(isFound){
    cout<<"found";
}else{
    cout<<"Not Found";
}
	return 0;
}
