//function to print all prime numbers between two numbers

#include<iostream>
using namespace std;
void prime(int a){
	int i,flag=0;
	
	for(i=0;i<a/2;i++){
	  if(a%i==0){
	  	flag = flag +1;
	  }	
	}
	
	if(flag==0){
		cout<<a<<endl;
	}
	
}

int main()
{ int i,n,m;

cout<<"first number :";
cin>>n;

cout<<"second number :";
cin>>m;

	for(i=n;i<m+1;i++){
		prime(i);
	}

	
return 0;	
}
