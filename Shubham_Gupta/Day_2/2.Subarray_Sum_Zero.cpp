#include <iostream>
#include<unordered_map>
using namespace std;
bool find_Subarray(int a[],int n){
     unordered_map<int,bool>map;
	    int sum=0;
	    bool flag=false;
	    for(int i=0;i<n;i++){
	        sum+=a[i];
	        if(map[sum])  return true;
	        map[sum]=true;
	    }
	    
	    return false;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    if(find_Subarray(a,n)) cout<<"Yes";
	}
	return 0;
}