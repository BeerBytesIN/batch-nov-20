// link : https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/submissions/

bool compare(int a, int b)
{
        if(__builtin_popcount(a) == __builtin_popcount(b)){
            return(a < b);
        }
        else{
            return (__builtin_popcount(a) < __builtin_popcount(b));
        }
}
class Solution {
public:
   
    vector<int> sortByBits(vector<int>& arr) {
      
        sort(arr.begin(),arr.end(),compare);
      
        return arr;
        
    }
    
};
