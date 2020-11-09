// Link : https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1


int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> m;
        for(int i=0 ; i < n ; i++) 
            m[arr[i]]++;
            
        int cnt = 0;
        for(int i=0;i<n;i++){
            
                cnt += m[k-arr[i]];
                
                if(k-arr[i]==arr[i]) cnt--;
        }
        return cnt/2;
}


// We can do that in O(n2), O(1) too.
