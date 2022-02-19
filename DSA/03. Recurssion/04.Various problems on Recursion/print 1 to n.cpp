//Recursion: Print 1-n

#include <iostream>
using namespace std;

//approach 1
void print(int n , int c){
    if(c == n+1)
        return;
    cout<<c<<endl;
    print(n,c+1);
}


//approach 2
void funRev(int n){
    if(n == 0)
        return;
    funRev(n-1);
    cout<<n<<endl;
}

int main() {
	int n;
	int counter = 1;
	cin>>n;
	//print(n,counter);
	funRev(n);

	return 0;
}
