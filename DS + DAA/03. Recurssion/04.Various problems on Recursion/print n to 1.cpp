//Recursion: Print n-1

#include <iostream>
using namespace std;

int print(int n){
    if(n==0)
        return 1;
    cout<<n<<endl;
    return print(n-1);
}

int main() {
	int n;
	cin>>n;
	int xd =  print(n);

	return 0;
}
