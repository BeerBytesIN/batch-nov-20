// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1

class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    int ans=arr[0];
	    int maxi=ans;
	    int mini=ans;
	    for(int i=1; i<n; i++){
	        if(arr[i]<0)
	            swap(maxi, mini);
	            maxi=max(arr[i], maxi*arr[i]);
	            mini=min(arr[i], mini*arr[i]);
	            ans=max(ans, maxi);
	    }
	    return ans;
	}
};
