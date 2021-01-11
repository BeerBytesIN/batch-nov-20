// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends


//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	   int cur_maxproduct = arr[0];
	   int cur_minproduct = arr[0];
	   int prev_maxproduct = arr[0];
	   int prev_minproduct = arr[0];
	   int ans=arr[0];
	   
	   for(int i=1;i<n;i++)
	   {
	       cur_maxproduct = max(prev_maxproduct * arr[i] ,max( prev_minproduct * arr[i] , arr[i]));
	       cur_minproduct = min(prev_maxproduct * arr[i] ,min( prev_minproduct * arr[i], arr[i]));
	       
	       ans = max(ans, cur_maxproduct);
	       prev_maxproduct  = cur_maxproduct;
	       prev_minproduct = cur_minproduct;
	   }
	   return ans;
	   
	   
	   
	   
	   
	   
	}
};

// { Driver Code Starts.

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
}  // } Driver Code Ends