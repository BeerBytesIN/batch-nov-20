class Solution {
public:
    void reverseString(vector<char>& s) {
        int low=0;
        int high=s.size()-1;
        while(low<high)
        {
            int t=s[low];
            s[low]=s[high];
            s[high]=t;
            low++;
            high--;
        }
    }
};
