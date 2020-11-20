//Sellection Sort
//Find the min element  in unsorted array and swap it with element at beginning

#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	
	cin>>n;
	
	int a[n];
	
	for(i=1;i<n+1;i++){
		cin>>a[i];
	}

	for(i=1;i<n+1;i++){
		for(j=i+1;j<=n;j++){
		    if(a[j]<a[i]){
			int temp = a[j];
			a[j]=a[i];
			a[i]=temp;
		    }
		}
	}
	
	
		for(i=1;i<n+1;i++){
		cout<<a[i];
	}
	
	
	return 0;

}
