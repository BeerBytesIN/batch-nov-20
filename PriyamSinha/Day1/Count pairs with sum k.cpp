
int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
            
        int res=0;
        for(int i=0;i<n;i++)
        {
            res+=m[k-arr[i]];
            if(k==2*arr[i])  
                res--;
        }
        return res/2;
    }