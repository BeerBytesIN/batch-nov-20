#include <iostream>
using namespace std;
// longest contigous array
int maxSubarraySum(int arr[], int n){
    
    int sum=0;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        ans=max(ans,sum);
        if(sum<0) sum=0;
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
	int *a;
	a=new int[n]();
	for(int i=0;i<n;i++) cin>>a[i];
    cout<<maxSubarraySum(a,n);
	return 0;
}