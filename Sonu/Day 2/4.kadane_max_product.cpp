// https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1


class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long ans=arr[0];
	    long long maxi=ans;
	    long long mini=ans;
	    for(int i=1; i<n; i++){
	        if(arr[i]<0)
	            swap(maxi, mini);
	            maxi=max((long long)arr[i], maxi*arr[i]);
	            mini=min((long long)arr[i], (long long) mini*arr[i]);
	            ans=max(ans, maxi);
	    }
	    return ans;
	}
};
