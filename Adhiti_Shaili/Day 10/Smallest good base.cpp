#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    typedef long long ll;
    string smallestGoodBase(string n) {
        ll num = stoll(n);
     
        for(int m = 61; m > 2; m--){
            ll lo = 2, hi = num-1;
            
            
            while(lo <= hi){
                ll mid =  (lo + hi) / 2;
                bool flag = 0;
                ll val = 1, j = 1, res = 1;
                while(j < m){
                    if(val  > (num - res) / mid){
                        flag = 1;
                        break;
                    }
                    j++;
                    val *= mid;
                    res += val;
                }
                
                if(flag || res > num){
                    hi = mid-1;
                }
                else if(res < num)
                    lo = mid + 1;
                else
                    return to_string(mid);
            }
        }
        return to_string(num-1);
        
    }
};