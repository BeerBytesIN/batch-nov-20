#include<bits/stdc++.h>
typedef  long long int ll;
typedef  long double ld;
#define sync ios_base::sync_with_stdio(false); cin.tie(NULL)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define mod 1000000007
#define F first
#define S second
#define to 2
#define pb push_back
using namespace std;


int findDuplicate(vector<int>& nums) 
{
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++)
        if(nums[i]==nums[i+1])
            return nums[i];
    return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);

    input(v,n);
    cout<<findDuplicate(v)<<"\n";
}