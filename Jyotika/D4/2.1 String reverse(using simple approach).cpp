/*STRING REVERSAL IN O(N) TIME COMPLEXITY AND INPLACE SPACE COMPLEXITY*/ 
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for(int i=0;i<n/2;i++)
        {
            swap(s[i], s[n-i-1]);
        }
    }
};