#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.size()==0)
        {
            return 0;
        }
        int size=s.size(),count=k,i=0,j=0,maxi=0;
        
        int alphabet[26] = {0};
        while(j < s.length()){
            alphabet[s[j] - 'A']++;
            maxi = max(maxi, alphabet[s[j] - 'A']);
            j++;
            
            if(j - i - maxi > k){
                alphabet[s[i] - 'A']--;
                i++;
            }
        }
        return j - i;
               
    }
};