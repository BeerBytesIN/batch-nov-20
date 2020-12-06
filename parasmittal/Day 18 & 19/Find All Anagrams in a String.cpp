class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(s.length()==0 || p.length()==0 || p.length()>s.length())
            return {};
        vector<int> pattern(26,0);
        for(int i=0;i<p.length();i++)
            pattern[p[i]-'a']++;
        vector<int> text(26,0);
        for(int i=0;i<p.length();i++){
            text[s[i]-'a']++;
        }
        vector<int> ans;
        if(text==pattern)
            ans.push_back(0);
        for(int i=p.length();i<s.length();i++){
            text[s[i-p.length()]-'a']--;
            text[s[i]-'a']++;
            if(text==pattern){
                ans.push_back(i-p.length()+1);
            }
        }
        return ans;
    }
};