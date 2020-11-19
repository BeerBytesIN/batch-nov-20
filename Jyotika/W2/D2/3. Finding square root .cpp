class Solution {
public:
    int mySqrt(int x) {
        
        
   int low = 0;
   int high = x;
   int mid;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(pow(mid,2)==x)
            {
                return mid;
            }
            else if(pow(mid,2) <x)
            {
                low = mid+1;
            }
            else
            {
                high  =mid-1;
            }
        }
        return high;
    }
};