class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    if(n==1)
	    return arr[0];
	    long long minEndingHere=1;
	    long long maxEndingHere=1;
	    long long maxproduct=1;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0){
	            maxproduct=((long long)0,maxproduct);
	            minEndingHere=1;
	            maxEndingHere=1;
	            continue;
	        }
	        minEndingHere*=arr[i];
	        maxEndingHere*=arr[i];
	        if(arr[i]<0){
	            swap(maxEndingHere,minEndingHere);
	        }
	        maxproduct=max(maxproduct,maxEndingHere);
	        if(maxEndingHere<0)
	        maxEndingHere=1;
	        
	    }
	    return maxproduct;
	}
};