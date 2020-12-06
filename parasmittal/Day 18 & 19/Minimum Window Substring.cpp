class Solution {
public:
    string minWindow(string s, string t) {
        int patternlen=t.length();
        int textlen=s.length();
        if(patternlen==0 || textlen==0 || patternlen>textlen)
            return "";
        string ans="";
        int start=0;
        int start_index=-1;
        int end=0;
        int minlen=INT_MAX;
        int count=0;
        unordered_map<char,int> pattern;
        unordered_map<char,int> text;
        for(int i=0;i<patternlen;i++)
            pattern[t[i]]++;
        while(end<textlen){
            text[s[end]]++;
            if(pattern[s[end]]!=0 && pattern[s[end]]>=text[s[end]])
                count++;
            if(count==patternlen){
                while(pattern[s[start]]==0 || pattern[s[start]]<text[s[start]] ){
                    if(pattern[s[start]]<text[s[start]])
                        text[s[start]]--;
                    start++;
                }
                if(end-start+1<minlen){
                    start_index=start;
                    minlen=end-start+1;
                }
            }
            end++;
        }
        if(start_index==-1)
            return "";
        return s.substr(start_index,minlen);
    }
};