class Solution {
public:
        
    void merge(vector<int>& nums,int s,int mid,int e)
    {
        int n1=mid-s+1;
        int n2=e-mid;
        vector<int> v1(n1,0);
        vector<int> v2(n2,0);
        
        for(int i=0;i<n1;i++)
        {
            v1[i]=nums[s+i];
        }
        
        for(int i=0;i<n2;i++)
        {
            v2[i]=nums[mid+1+i];
        }
        
        int k=s,i=0,j=0;
        while(i<n1&&j<n2)
        {
            if(v1[i]<v2[j])
            {
                nums[k++]=v1[i++];
            }
            else
            {
                nums[k++]=v2[j++];
            }
        }
        while(i<n1)
        {
            nums[k++]=v1[i++];
        }
        while(j<n2)
        {
            nums[k++]=v2[j++];
        }
    }
    
    int mergesort(vector<int>& nums,int s,int e)
    {
        if(s>=e)
        {
            return 0;
        }
        int mid=(s+e)/2;
        int count=mergesort(nums,s,mid)+mergesort(nums,mid+1,e);
        int j=mid+1;
        for(int i=s;i<=mid;i++)
        {
            while(j<=e&&(nums[i]>(long long)nums[j]*2))
            {
                j++;
            }
            count+=j-(mid+1);
        }
        merge(nums,s,mid,e);
        return count;
    }
    
    
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
               
    }
};