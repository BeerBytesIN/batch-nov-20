class Solution {
public:
    void reverseString(vector<char>& s) {

        int start =0;
        int endd = s.size()-1;
        while(start<=endd)
        {
            swap(s[start], s[endd]);
            start++;
            endd--;
        }
    }
};