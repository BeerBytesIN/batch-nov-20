/* finding the peak of an array in n complexity */
#include<bits/stdc++.h>
using namespace std;
int findpeak(vector<int>nums)
{

int ans=-1;
int n= nums.size();
//cout<<n<<"\n";
for(int i=0;i<n;i++)
{
	//cout<<i<<" "<<nums[i]<<"\n";
	if(i==0 && nums[i]>nums[i+1])
	{
		ans=i;
	}
	else if((i==(n-1)) && (nums[i]>nums[i-1]) )
	{
		ans=i;
	}
	else if(i>0 && i<(n-1) && (nums[i]>nums[i-1])&&(nums[i]>nums[i+1]))
	{
		ans=i;
	}
}	
return ans;

}



int main()
{
	int n;
	cin>>n;
	
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		v.push_back(a);
	}
	int ans = findpeak(v);
	cout<<ans<<"\n";
}