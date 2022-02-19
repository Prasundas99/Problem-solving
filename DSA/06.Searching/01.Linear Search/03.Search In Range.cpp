//Search in Range
/*
arr= [18, 12, -7, 3, 14, 28]
search for 3 in the range of index[1,4]
*/
#include <iostream>
#include <string.h>
using namespace std;

bool search(int name[], char target, int start, int end, int size){
    if(size == 0)
        return false;
    int i;
    for(i=start; i<=end;i++){
        if(target == name[i])
            return true;
    }   
    return false;
}

int main() {
	int name[6] = {18, 12, -7, 3, 14, 28};
	char target = 6;
	int start = 1;
	int end = 4;
	int size = sizeof(name[6]);
	
	
	if(search(name, target, start, end, size))
	    cout<<"Found";
	else
	    cout<<"Not Found";
	return 0;
}
