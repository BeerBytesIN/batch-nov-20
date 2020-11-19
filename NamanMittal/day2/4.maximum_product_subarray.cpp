    long long min(long long x,long long y){
        if(x<y){
            return x;
        }
        else{
            return y;
        }
    }
    long long max(long long x,long long y){
        if(x>y){
            return x;
        }
        else{
            return y;
        }
    }
	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    if(n==1){
	        return arr[0];
	    }
	    long long maxprod=1,minprod=1,maxsofar=1;
	    for(int i=0;i<n;i++){
	        //cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
	        if(arr[i]>0){
	          //  cout<<"Inside arr[i]>0"<<endl;
	            maxprod=maxprod*arr[i];
	            minprod=min(minprod*arr[i],1);
	        }
	        else if(arr[i]==0){
	            //cout<<"Inside arr[i]=0"<<endl;
	            maxprod=1;
	            minprod=1;
	        }
	        else{
	            //cout<<"Inside arr[i]<0"<<endl;
	            long long temp=maxprod;
	            //cout<<"before maxprod: "<<maxprod<<endl;
	        
	            maxprod=max(minprod*arr[i],1);
	            minprod=temp*arr[i];
	        }
	        //cout<<"maxprod: "<<maxprod<<endl;
	        //cout<<"minprod: "<<minprod<<endl;
	        if(maxsofar<maxprod){
	            maxsofar=maxprod;
	        }
	        //cout<<"maxsofar: "<<maxsofar<<endl;
	    }
	    return maxsofar;
	}
