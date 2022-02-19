#include <iostream>
using namespace std;


void bruteForce(string s){
    for(int i =0;i<s.length()-1;i++){
	    for(int j = i+1;j<s.length();j++){
	        if(s[i] ==s[j])
	            cout<<"Non Repetative element is:"<<s[i]<<endl;
	    }
	}
}


int main() {
	string s;
	cin>>s;
	bruteForce(s);
	
	return 0;
}
