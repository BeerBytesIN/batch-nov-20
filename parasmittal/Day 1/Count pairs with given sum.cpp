class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> um;
        for(int i=0;i<n;i++)
        um[arr[i]]++;
        int count=0;
        for(int i=0;i<n;i++){
            um[arr[i]]--;
            if(um.find(k-arr[i])!=um.end())
            count+=um[k-arr[i]];
        }
        return count;
        
    }
};