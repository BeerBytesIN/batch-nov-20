class Solution {
public:
    int mySqrt(int x) {
        int low=1;
        int high=x/2;
        if(x<=1)
        {
            return x;
        }
        int ans=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if((long long)mid*mid==x)
            {
                return mid;
            }
            else if((long long)mid*mid<x)
            {
                low=mid+1;
                ans=mid;
            }
            else
            {
                high=mid-1;
            }
        }
        return ans;
        
    }
};