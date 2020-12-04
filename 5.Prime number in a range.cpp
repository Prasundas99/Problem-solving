//function to print all prime numbers between two numbers

#include<iostream>
using namespace std;




bool prime(int a){
for(int i=2;i<=a/2;i++){
if(a%i==0){
return false;
}
}
return true;
}
	
	



int main()
{ int i,n,m;

cout<<"first number :";
cin>>n;

cout<<"second number :";
cin>>m;

	for(i=n;i<m+1;i++){
		if(prime(i))
		cout<<i<<endl;
	}

	
return 0;	
}
