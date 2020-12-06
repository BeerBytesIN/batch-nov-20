class Solution {
public:
    int replace(string s,int k,char c){
        int count=0;
        int len=0;
        int start=0;
        int end=0;
        while(end<s.length()){
            if(s[end]!=c){
                count++;
                while(count>k){
                    if(s[start]!=c)
                        count--;
                    start++;
                }
                
            }
            len=max(len,end-start+1);
            end++;
        }
        return len;
    }
    int characterReplacement(string s, int k) {
        int len=0;
        for(int i=0;i<26;i++){
            len=max(len,replace(s,k,'A'+i));
        }
        return len;
    }
};