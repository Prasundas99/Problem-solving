//Taking array and keeping union and  intersection
#include <iostream>
using namespace std;

int main() {
    unordered_map<int,int> map;
    //array 1
    int n;
    cin>>n;
    int a[n];
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
        map[a[i]]++
    }
    //array 2
    int m;
    cin>>m;
    int b[m];
    int i;
    for(i=0;i<m;i++){
        cin>>b[i];
        map[b[i]]++;
    }
    
    
    cout<<map.size();
	return 0;
}

//Time complechity o(n)
