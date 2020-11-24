class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> v(n,0);
        for(int i=0;i<bookings.size();i++)
        {
            v[bookings[i][0]-1]+=bookings[i][2];
            if(bookings[i][1]<n)
            {
                v[bookings[i][1]]+=-bookings[i][2];
            }
            
        }
        for(int i=1;i<n;i++)
        {
            v[i]+=v[i-1];
        }
        return v;
        
    }
};