class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int j;
        for(int i=0;i<nums.size();i++)
        {
            for(j=i+1;j<nums.size();j++)
            {
                if(target==(nums[i]+nums[j]))
                {
                    break;
                }
            }
            if(j!=nums.size())
            {
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
        return ans;
    }
};
