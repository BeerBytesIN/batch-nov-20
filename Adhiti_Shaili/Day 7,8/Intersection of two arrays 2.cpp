class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hash;
        vector<int> v;
        for(int i=0;i<nums1.size();i++)
        {
            hash[nums1[i]]++;
        }
        
        for(int i=0;i<nums2.size();i++)
        {
           if(hash[nums2[i]])
            {
                v.push_back(nums2[i]);
                hash[nums2[i]]--;
            }
        }
        return v;
        
    }
};