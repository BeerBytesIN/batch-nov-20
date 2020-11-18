// Link : https://leetcode.com/problems/longest-common-prefix/submissions/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int x = 0;
        string ans = "";
        if(strs.size()==0) return ans;
        while(strs[0][x]!='\0'){
            char ch = strs[0][x];
            for(int i=0;i<strs.size();i++){
                if(strs[i][x]!=ch){
                    return ans;
                }
            }
            x++;
            ans+=ch;
        }
        return ans;
    }
};
