#include <bits/stdc++.h>
using namespace std;
bool find(vector<string> &s,int idx,char ch){
        for(int i=1;i<s.size();i++)
        {
            if(s[i][idx]!=ch) return false;
        }
        return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0) return "";
        string ans="";
        for(int i=0;i<strs[0].length();i++){
            char  ch=strs[0][i];
            if(find(strs,i,ch) || n==1) ans+=ch;
            else return ans;
        }
        return ans;
    }
int main(){
    vector<string> a={"flow","flio","flhj"};
    cout<<longestCommonPrefix(a);
    return 0;
}