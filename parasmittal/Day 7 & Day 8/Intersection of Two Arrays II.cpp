class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        if(nums1.size()==0 ||nums2.size()==0)
            return ans;
        unordered_map<int,int> um;
        for(int i=0;i<nums1.size();i++)
            um[nums1[i]]++;
        for(int i=0;i<nums2.size();i++){
            if(um[nums2[i]]>0){
                ans.push_back(nums2[i]);
                um[nums2[i]]--;
            }
        }
        return ans;
    }
};