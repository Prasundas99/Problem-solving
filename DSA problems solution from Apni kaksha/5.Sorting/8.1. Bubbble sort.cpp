//Bubble sort
//Reapetedly swap 2 adjacent elements if they are in wrong order

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



	int counter = 1;
	
	while(counter<n){
		for(i=0;i<n-counter;i++){
			if(a[i] > a[i+1]){
				int temp = a[i];
				a[i]=a[i+1];
				a[i]=temp;
			}
			counter++;
		}	
	}
	
	
	for(i=1;i<n+1;i++){
		cout<<a[i];
	}
	
	
	return 0;

}
