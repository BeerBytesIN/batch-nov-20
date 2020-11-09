// Link : https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#
// O(nlogn),O(1) respectively.

void merge(int arr1[], int arr2[], int n, int m) {
	     
	    int i,j,gap = (n+m+1)/2;
	    
	    while(gap>0){
	        
	        // Comparing elements in the first array : 
	        for(i=0; i+gap < n ; i++ )
	            if(arr1[i] > arr1[i+gap])
	                swap(arr1[i],arr1[i+gap]);
	        // Comparing elements in both the array : 
	        for(j = (gap > n) ? gap-n : 0; i<n && j<m; i++,j++)
	            if(arr1[i] > arr2[j])
	                swap(arr1[i], arr2[j]);
	       
	        // comparing elements in second array :
	        if(j<m){
	            for(j=0;j+gap<m;j++)
	                if(arr2[j] > arr2[j+gap])
	                    swap(arr2[j],arr2[j+gap]);
	        }
	       
	        if(gap>1) gap= (gap+1)/2;
	        else break;
	        
	    }
	}
  
  // We also can use insertion sort intution in O(n2) time.
