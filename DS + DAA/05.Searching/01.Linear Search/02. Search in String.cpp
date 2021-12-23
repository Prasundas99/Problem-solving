//Search in string
#include <iostream>
#include <string.h>
using namespace std;

bool search(string name, char target){
    if(name.size() == 0)
        return false;
    int i;
    for(i=0; i<name.size();i++){
        if(target == name[i])
            return true;
    }    
}

int main() {
	string name = "Prasun";
	char target = 'u';
	
	cout<<"Searching:"<<name<<endl;
	cout<<"Target:"<<target<<endl;
	
	if(search(name, target))
	    cout<<"Found";
	else
	    cout<<"Not Found";
	return 0;
}
