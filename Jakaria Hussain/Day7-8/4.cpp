// Link : https://leetcode.com/problems/corporate-flight-bookings/submissions/
class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
       
        vector<int> ans(n);
        // memset(ans,0,sizeof(ans));
        
        for(int i=0;i<bookings.size();i++){
            int start = bookings[i][0], end = bookings[i][1];
            int value = bookings[i][2];
            
            ans[start-1]+= value;
            if(end<n) ans[end] -= value;
        }
        for(int i=1;i<n;i++)    ans[i] +=ans[i-1];
        return ans;
    }
};
