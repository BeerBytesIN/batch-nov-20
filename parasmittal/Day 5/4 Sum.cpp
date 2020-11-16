class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
       
      set<vector<int>> out;
        vector<vector<int>> ans;
        int n=arr.size();
        if(n<=3)
            return ans;
         sort(arr.begin(),arr.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1;
                int r=n-1;
                while(l<r){
                    int sum=arr[l]+arr[r]+arr[i]+arr[j];
                    if(sum==target){
                        out.insert({arr[i],arr[j],arr[l],arr[r]});
                        l++;
                        r--;
                    }
                    else if(sum<target)
                        l++;
                    else
                        r--;
                }
            }
        }
        for(auto x : out)
            ans.push_back(x);
        return ans;
    }
};