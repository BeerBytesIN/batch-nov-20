class Solution {
  public:
    int maxStairHeight(int N) {
        int low=1;
        int high=N;
        int ans=1;
        while(low<high)
        {
            int mid=(low+high)/2;
            
            int x=(2*N)/mid;
            if(mid+1<=x)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid;
            }
        }
        return ans;
    }
};