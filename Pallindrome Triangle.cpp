//Pallindrome triangle

#include<iostream>

using namespace std;
int main()
{ int i, n , j,k,l;

	cin>>n;
	
	for(i=n;i>1;i--){
		for(k=0;k<i+1;k++){
			cout<<" ";
		}
		for(l=n;l>=i;l--){
			cout<<l;
		}
		cout<<endl;
		
	}
	
	//for right triangle
	for(i=1;i<n+1;i++){
		for(j=1;j<i+1;j++){
			cout<<j;
		}
		cout<<endl;
	}

	
	
	
	
return 0;	
}
