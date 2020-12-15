class Solution {
public:
    static bool comp(vector<int> a,vector<int> b){
        if(a[0]==b[0]){
            return a[1]<b[1];
        }
        return a[0]<b[0];
    }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(n==0)
            return {{}};
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end(),comp);
        int end=intervals[0][1];
        ans.push_back(intervals[0]);
        int start=0;
        for(int i=1;i<n;i++){
            if(intervals[i][0]<=end){
                int min_start=min(ans[start][0],intervals[i][0]);
                int max_end=max(ans[start][1],intervals[i][1]);
                ans[start][0]=min_start;
                ans[start][1]=max_end;
                end=max_end;
            }
            else{
                end=intervals[i][1];
                ans.push_back(intervals[i]);
                start++;
            }
        }
        return ans;
    }
};