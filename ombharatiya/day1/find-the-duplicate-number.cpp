// https://leetcode.com/problems/find-the-duplicate-number

#include <bits/stdc++.h>
using namespace std;

// Time -- O(NlogN)
// Space -- O(1)
class Solution {
public:
    int findDuplicate(vector<int>& array) {
        sort(array.begin(), array.end());
        
        for (int i = 1; i < array.size(); i++)
        {
           if(array[i] == array[i-1]) {
               return array[i];
           }
        }

        return -1;
    }
};


// Time -- O(N)
// Space -- O(N)
class Solution2 {
public:
    int findDuplicate(vector<int>& a) {
        set<int> s;
        int n = a.size();
        
        for(int i=0;i<n;i++) {
            if(s.find(a[i])!=s.end()) return a[i];
            s.insert(a[i]);
        }
        return -1;
    }
};


// Tortoise and Hare Approach
// Time -- O(N)
// Space -- O(1)

class Solution3 {
public:
    int findDuplicate(vector<int>& A) {
        int slow = A[0], fast = A[A[0]];
        int n = A.size();
        int i = 0;
        while(i<n && slow!=fast) {
            slow = A[slow];
            fast = A[A[fast]];
            i++;
        }
        if (i == n) return -1;
        i = 0;
        slow = 0;
        while(i<n && slow!=fast) {
            slow = A[slow];
            fast = A[fast];
            i++;
        }
        return slow;
        
    }
};

int main() {
    // driver function implementation
    return 0;
}