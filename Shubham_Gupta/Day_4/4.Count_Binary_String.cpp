#include <iostream>
using namespace std;
// leetcode 696

// Approach 1: DP T.C.= O(n^2), will give TLE 
int countBinarySubstrings(string &s) {
        int n=s.length();
        
        int **dp=new int*[n]();
        for(int i=0;i<n;i++)
            dp[i]=new int[n]();
        
        int count=0;
        for(int i=n-1;i>=0;i--){
            for(int j=i;j<n;j++){
                if(i==j) continue;
                
                if(j-i==1 && s[i]!=s[j])
                    dp[i][j]=1;
                 
                else if(dp[i+1][j-1]==1 &&s[i]==s[i+1] && s[j]==s[j-1])
                    dp[i][j]=1;
                
                if(dp[i][j]) count++;
            }
        
        }
    
        return count;
    }

// Approach 2: O(n)
 int countBinarySubstrings(string &s) {
        int n=s.length();
        
        int ans=0,prev=0,curr=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]) curr++;
            else{
                ans+=min(prev,curr);
                prev=curr;
                curr=1;
            }
        }
        
        return ans+min(prev,curr);
    }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << longestPalindrome_RECURSION(s) << endl;
        cout << longestPalindrome_DP(s) << endl;
    }
    return 0;
}