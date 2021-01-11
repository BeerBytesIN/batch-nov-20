class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0)return "";
        
        string ans=strs[0];
      
        
        
        ans=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            while(strs[i].find(ans)!=0)
            {
                ans = ans.substr(0, ans.length()-1);
                if(ans.length()==0)
                    return "";
                
            }
        }
        return ans;
         
    }
};