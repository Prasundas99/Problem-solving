//Binary search
//Tutorial == https://www.youtube.com/watch?v=13ocRMSJy5M&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=19


#include<iostream>
using namespace std;

int binarySearch(int a[], int n , int k){
	int s=0;
	int e=n;
	
	while(s<=e){
		int mid = (s+e)/2;
		
		if(a[mid]==k){
			return mid;
		}
		else if(a[mid]>k){
			e=mid-1;
		}
		else{
			s=mid+1;
		}
	}
	
	return -1;
}


int main()
{	int n,i,k;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}

	cout<<"Enter  number to search :"<<endl;
	cin>>k;
	
	
  int result =  binarySearch( a,  n ,  k);
  
  cout<<result<<endl;
	
	return 0;

}


