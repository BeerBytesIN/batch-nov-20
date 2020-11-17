// https://leetcode.com/problems/best-time-to-buy-and-sell-stock

// Using left min & right max numbers array 
// Time -- O(N)  (2 * N)
// Space -- O(N)  (2 * N)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> r(n), l(n);
        if(n<2) return 0;
        r[n-1] = prices[n-1];
        l[0] = prices[0];
        
        for(int i=1;i<n-1;i++) {
            l[i] = min(l[i-1], prices[i]);
            r[n-1-i] = max(r[n-i], prices[n-1-i]);
        }
        r[0] = max(prices[0], r[1]);
        l[n-1] = min(prices[n-1], l[n-2]);
        
        int profit = 0;
        for (int i=0;i<n;i++) {
            profit = max(profit, r[i]-l[i]);
        }
        return profit;
    }
};

// Single Pass - Peak & valley 
// Time -- O(N) 
// Space -- O(1)
class Solution2 {
public:
    int maxProfit(vector<int>& A) {
        int n = A.size();
        if (n<2) return 0;
        int minn = A[0];
        int profit = 0;
        for(int i=1;i<n;i++) {
            if (A[i]<minn) minn = A[i];
            else if (profit < A[i]-minn) profit = A[i]-minn;
        }
        return profit;
    }
};