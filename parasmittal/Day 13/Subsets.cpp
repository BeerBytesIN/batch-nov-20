class Solution {
public:
    vector<vector<int>> subsets(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>> ans;
        int total=pow(2,n);
        for(int i=0;i<total;i++){
            vector<int> out;
            int binary=i;
            for(int j=0;j<n;j++){
                if((binary>>j)%2)
                    out.push_back(arr[j]);
            }
            ans.push_back(out);
        }
        return ans;
    }
};