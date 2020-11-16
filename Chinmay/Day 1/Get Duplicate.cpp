

#include <bits/stdc++.h>
using namespace std;

#define in_arr(a,n) for(int ind = 0; ind < n; ind++) cin >> a[ind];
#define out_arr(a,n) for(int ind = 0; ind < n; ind++) {cout << a[ind] << " ";} cout << "\n";
#define vi vector<int>
#define vvi vector<vector<int>>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define pii pair<int, int> 
#define pil pair<int, long long> 
#define psi pair<string, int> 
#define pis pair<int, string> 
#define pci pair<char, int> 
#define pic pair<int, char> 
#define fi first
#define se second


typedef long long ll;

const int mod = 1e9+7;


int findDuplicate(vector<int>& nums) {
	int l = 1, r = nums.size()-1, mid;
	int smaller, exact, greater;

	while(l <= r)
	{
	    mid = (l+r)/2;
	    smaller = 0;
	    exact = 0;
	    greater = 0;
	    
	    for(int i = 0; i < nums.size(); i++)
	    {
	        if(nums[i] == mid)
	            exact++;
	        else if(nums[i] < mid)
	            smaller++;
	        else
	            greater++;
	    }
	    
	    if(exact > 1)
	        return mid;
	    else if(smaller > mid-1)
	        r = mid-1;
	    else
	        l = mid+1;
	}
	return -1;
}
int main()
{	
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
    
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;
		vector<int> nums(n+1);
		in_arr(nums, n+1);

		cout << findDuplicate(nums) << "\n";
	}
	return 0;
}