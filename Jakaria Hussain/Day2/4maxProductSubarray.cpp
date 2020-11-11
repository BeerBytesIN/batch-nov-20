// Link : https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long mxeh = 1, mneh = 1, mxsf = 1,one =1;
	    int flag= 0;
	    for(int i=0;i<n;i++){
	        
	       // if(arr[i]==0) prod = 1;
	        
	        // Case 1: if element > 0
	        if(arr[i]>0){
	            mxeh = mxeh * arr[i];
	            mneh = min(mneh*arr[i],one);
	            flag = 1;
	        }
	        // Case 2  : if element = 0
	        else if(arr[i] == 0){
	            mxeh = 1;
	            mneh = 1;
	        }
	        else {
	            long long temp = mxeh;
	            mxeh = max(mneh*arr[i], one);
	            mneh = temp*arr[i];
	           // flag = 0;
	        }
	        
	       // mxsf = max(mxsf, mxeh);
	        if(mxeh > mxsf) mxsf = mxeh;
	    }
	   // if(flag == 0 && mxsf==1) return 0;
	    return mxsf;
	} 
