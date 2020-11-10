//Pallindrome triangle

#include<iostream>

using namespace std;
int main()
{ int i, n , j,k,l;

	cin>>n;
	
	for(i=1;i<n;i++){
		for(l=n;l>=i;l--){
			cout<<" ";
		}
		
		for(k=2;k<i+1;k++){
			cout<<k;
		}
		
			
	//for right triangle
	
		for(j=1;j<i+1;j++){
			cout<<j;
		}
		cout<<endl;
	}

	
	
	
	
return 0;	
}
