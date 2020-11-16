class Solution {
public:
    int findMinLen(vector<string>& strs){
        int minlen=strs[0].length();
        for(int i=1;i<strs.size();i++){
            if(minlen>strs[i].length())
                minlen=strs[i].length();
        }
        return minlen;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0) return "";
        if(n==1) return strs[0];
        int minlen=findMinLen(strs);
        string out="";
        for(int i=0;i<minlen;i++){
            char c=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=c)
                    return out;
            }
            out+=c;
        }
        return out;
    }
};