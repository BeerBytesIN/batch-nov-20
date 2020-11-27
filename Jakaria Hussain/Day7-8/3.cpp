// Link : https://leetcode.com/problems/merge-intervals/

bool compare(vector<int>&a, vector<int>&b){
    return a[0]<b[0];
}
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int> > ans;
        sort(intervals.begin(), intervals.end(), compare);
        int n = intervals.size();
        
        if(n==1) return intervals;
       
        int loLim = intervals[0][0];
        int upLim = intervals[0][1];
        int start = 0, end = 0;
        
        for(int i=1;i<n;i++){
            start = intervals[i][0];
            end = intervals[i][1];
            
            if(start>=loLim && start<=upLim){
                if(end<=upLim) continue;
                else upLim = end;
            }
            else {
                vector<int> temp(2);
                temp[0] = loLim, temp[1] = upLim;
                ans.push_back(temp);

                loLim = start;
                upLim = end;
            }
        }
        vector<int> temp(2);
        temp[0] = loLim, temp[1] = upLim;
        ans.push_back(temp);
        return ans;
    }
};
