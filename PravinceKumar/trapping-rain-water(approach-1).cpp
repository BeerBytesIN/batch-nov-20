class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left;
        vector<int> right;
        int max_ele=0;
        for(int i=0;i<height.size();i++)
        {
            max_ele=max(max_ele,height[i]);
            left.push_back(max_ele);
        }
        max_ele=0;
        for(int i=height.size()-1;i>=0;i--)
        {
            max_ele=max(max_ele,height[i]);
            right.push_back(max_ele);
        }
        reverse(right.begin(),right.end());

        int ans=0;
        for(int i=0;i<height.size();i++)
        {
            ans=ans + (min(left[i],right[i])-height[i]);
        }
        return ans;
    }
};
