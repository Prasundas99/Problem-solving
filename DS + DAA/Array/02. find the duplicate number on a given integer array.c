 #include <iostream>
using namespace std;

void findDublicateds(int arr[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] == arr[j])
                count<<a[i]< " is Dublicate at position"<<i<<endl;
        }
    }
}

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0 ; i< n ; i++){
	    cin>>arr[i];
	}
    
    findDublicateds(arr,n);
	
	return 0;
}
