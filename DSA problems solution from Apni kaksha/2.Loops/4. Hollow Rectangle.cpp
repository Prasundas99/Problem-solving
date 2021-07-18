//Hollow rectangle
     
#include<iostream>

using namespace std;
int main()
{
	int i,j,n,m;
	
	cin>>n>>m;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		if(i==0 || i==n-1 || j== 0 || j == n-1)	{
			
				cout<<"X";
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<endl;
	}
	
	
	
return 0;	
}
