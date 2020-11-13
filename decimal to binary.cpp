//Convert decimal to binary

#include<iostream>
using namespace std;
int main()
{
int n,i, a[20];
cin>>n;
for(i=0;n>0;i++){
	a[i]=n%2;
	n=n/2;
}

cout<<"Binary number is : ";
for(i=i;i>0;i--){
	cout<<a[i];
}

	
return 0;	
}
