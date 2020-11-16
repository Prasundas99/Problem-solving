// printing nCr of a number

//Convert decimal to binary

#include<iostream>
using namespace std;

int fact(int n){
	int factorial=1;
	for(int i=2;i<=n;i++){
	factorial*=i;
	}
return factorial;
	
}

int main()
{	int c=0,n,r;
cin>>n>>r;

	c = c + fact(n)/(fact(r)*fact(r-c));
	
	cout<<c<<endl;
	
	
	return 0;	
}
