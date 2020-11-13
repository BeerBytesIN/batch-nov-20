class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.length();
        if(n<=1)
            return 0;
       int countzero=0,countone=0;
        int ans=0;
        if(s[0]=='1')
            countone++;
        else
            countzero++;
            
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                if(s[i]=='1'){
                    countone=1;
                }
                else{
                    countzero=1;
                }
                ans++;
            }
            else{
                 if(s[i]=='1')
            countone++;
                 
        else
            countzero++;
                if(countzero==countone ||(s[i]=='1' && countzero>countone) || (s[i]=='0' && countone>countzero)){
                ans++;
                }
            }
        }
        return ans;
    }
};