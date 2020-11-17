class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int>total(n+5);
       
        vector<int>ans;
        for(int i=0;i<bookings.size();i++)
        {
            int ff= bookings[i][0];
            int ss= bookings[i][1];
            int val= bookings[i][2];
            
            
            total[ff]+=val;
            total[ss+1]-=val;
            
        }
        for(int i=1;i<=n;i++)
        {
            total[i]+=total[i-1];
            ans.push_back(total[i]);
        }
        return ans;
       
    }
};