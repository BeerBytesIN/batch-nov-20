class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> sum(n,0);
        for(int i=0;i<bookings.size();i++){
            sum[bookings[i][0]-1]+=bookings[i][2];
            if(bookings[i][1]<n)
                sum[bookings[i][1]]-=bookings[i][2];
        }
        int val=0;
        for(int i=0;i<n;i++){
            sum[i]+=val;
            val=sum[i];
        }
        return sum;
    }
};