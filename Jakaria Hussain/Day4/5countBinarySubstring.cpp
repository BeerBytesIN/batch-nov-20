// Link : https://leetcode.com/problems/count-binary-substrings/

/* My trial : 
class Solution {
public:
    int countBinarySubstrings(string s) {
        /* 
        int oneSoFar = s[0]=='1' ? 1:0 ;
        int zeroSoFar = s[0]=='0' ? 1:0;
        int 
        */
        int oneSoFar = 0, zeroSoFar = 0, count = 0 ;
        for(char ch : s){
            if(ch == '0'){
                zeroSoFar++;
                if(oneSoFar>0) oneSoFar--, count++;
                
            }else {
                oneSoFar++;
                if(zeroSoFar>0) zeroSoFar--,count++;
            }
        }
        return count;
    }
};

*/

// Actual solution : 
class Solution {
public:
    int countBinarySubstrings(string s) {
         
        int oneSoFar = s[0]=='1' ? 1:0 ;
        int zeroSoFar = s[0]=='0' ? 1:0;
        int count=0;
        
        for(int i=1;i<s.length();i++){
            if(s[i]!=s[i-1]){
                count+=min(oneSoFar,zeroSoFar);
                
            s[i] == '0' ? zeroSoFar = 1 : oneSoFar = 1;
            }
            else {
                 s[i] == '0' ? ++zeroSoFar  : ++oneSoFar ;
           
            }
        }
        
        return count+min(oneSoFar,zeroSoFar);
    }
};
