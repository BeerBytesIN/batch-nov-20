//insertion sort method
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        if(n==0)
        {
            return;
        }
        else
        {
            int j=0;
            for(int i=0;i<m;i++)
            {
                if(nums2[0]<nums1[i])
                {
                    swap(nums2[0],nums1[i]);
                    sort(nums2.begin(),nums2.end());
                }
            }
            int i=0;
            for(int j=m;j<m+n;j++)
            {
                nums1[j]=nums2[i++];
            }
        }
    }
};
