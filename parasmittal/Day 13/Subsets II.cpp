

        
    
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        set<vector<int>> out;
        vector<vector<int>> ans;
        int n=arr.size();
        if(n==0)
            return ans;
        int x=pow(2,n);
    for(int i=0;i<x;i++){
       vector<int> z;
        int k=i;
        for(int j=0;j<n;j++){
            if(k%2==1)
                z.push_back(arr[j]);
            k=k>>1;
        }
        out.insert(z);
    }
     //   vector<vector<int>> ans;
        for(auto i : out)
            ans.push_back(i);
        return ans;
    }
};