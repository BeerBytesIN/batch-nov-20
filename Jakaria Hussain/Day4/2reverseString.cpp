// Link : https://leetcode.com/problems/reverse-string/submissions/
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        
        int st = 0, en = n-1;
        while(st < en){
            swap(s[st],s[en]);
            
            st++,en--;
        }
        for(char c : s)
            cout<<c;
    }
};
