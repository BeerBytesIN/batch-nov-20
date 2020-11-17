// https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int, int> > v(n);
        for(int i=0; i<n; i++)
                v[i]={nums[i], i};
        sort(v.begin(), v.end());
        int i=0, j=n-1;
        vector<int> ans;
        while(i<j){
            if(v[i].first+v[j].first==target){
                ans.push_back(v[i].second);
                ans.push_back(v[j].second);
                break;
            }
            else if(v[i].first+v[j].first>target)
                j--;
            else if(v[i].first+v[j].first<target)
                i++;
            
        }
        return ans;
    }
};
