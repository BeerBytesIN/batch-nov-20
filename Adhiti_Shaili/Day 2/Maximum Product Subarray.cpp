#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    long long pprod=1,ans=1,nprod=1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]<0)
	        {
	            swap(pprod,nprod);
	        }
	        
	        pprod=max((long long)arr[i],(long long)arr[i]*pprod);
	        nprod=min((long long)arr[i],(long long)arr[i]*nprod);
	        ans=max(ans,pprod);
	        
	    }
	    return ans;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
} 