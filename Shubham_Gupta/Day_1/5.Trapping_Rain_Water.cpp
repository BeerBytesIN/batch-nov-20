#include<iostream>
#include<climits>
using namespace std;
int rain_water_1(int*a,int n)
{
	int *left=new int[n]();
	int *right=new int[n]();
	left[0]=a[0];
	for(int i=1;i<n;i++)
		left[i]=max(left[i-1],a[i]);
	right[n-1]=a[n-1];
	for(int i=n-2;i>=0;i--)
		right[i]=max(right[i+1],a[i]);

	int ans=0;
	for(int i=0;i<n;i++)
		ans+=min(left[i],right[i])-a[i];
	return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int *a=new int[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	    cout<<rain_water_1(a,n)<<endl;
	}
	return 0;
}