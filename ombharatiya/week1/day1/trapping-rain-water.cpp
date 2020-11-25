// https://leetcode.com/problems/trapping-rain-water/

// Using DP - Left Max and Right Max Arrays 
// Time -- O(N)  -- double pass
// Space -- O(N)  


class Solution {
public:
    // A is heights array
    int trap(vector<int>& A) {
        int n = A.size();
        if (n<2) return 0;
        vector<int> right(n), left(n);
        right[n-1] = A[n-1];
        left[0] = A[0];
        for(int i=1;i<n-1;i++) {
            left[i] = max(left[i-1], A[i]);
            right[n-1-i] = max(right[n-i], A[n-1-i]);
        }
        left[n-1] = max(left[n-2], A[n-1]);
        right[0] = max(right[1], A[0]);
        
        long long sum = 0l;
        for(int i=0;i<n;i++) {
            int waterLevel = min(left[i], right[i]);
            if (waterLevel>A[i]) sum+=waterLevel-A[i];
        }
        return sum;
    }
};

// Using Stack Approach
// Time -- O(N)  -- single pass
// Space -- O(N)  

class Solution2 {
public:
    // A is heights array
    int trap(vector<int>& A) {
        int n = A.size();
        if (n<2) return 0;
        stack<int> st;
        st.push(0);
        long long sum = 0l;
        
        for(int i=1;i<n;i++) {
            while(!st.empty() && A[st.top()]<A[i]) {
                int middleBarIndex = st.top(); st.pop();
                if (!st.empty()) {
                    int boundedHeight = min(A[i], A[st.top()]) - A[middleBarIndex];
                    sum += boundedHeight * (i - st.top() - 1);
                }
            }
            st.push(i);
        }
        return sum;
    }
};
