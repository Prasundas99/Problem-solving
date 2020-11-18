//Linear search

#include<iostream>
using namespace std;
int main()
{
	int n,i,k;
	
	cin>>n;
	
	int a[n];
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<"Enter  number to search :"<<endl;
	cin>>k;
	
	for(i=0;i<n;i++){
		if(k == a[i]){
			cout<<i<<endl;
		}
	}
	
	return 0;

}
