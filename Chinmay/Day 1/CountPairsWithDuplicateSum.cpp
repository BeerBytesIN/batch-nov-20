#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        map<int, int> m;
        int ans = 0;
        for(int i = 0; i < n; i++)
            m[arr[i]]++;
        

        map<int, int> :: iterator itr;
        for(itr = m.begin(); itr!= m.end(); itr++)
        {
            if(m.find(k - itr->first) != m.end() && itr->first*2 != k)
            {
                ans += itr->second*m[k - itr->first];
                // cout << itr->first << " " << itr->second << " " << m[k - itr->first] << " ";
            }
            if(itr->first*2 == k)
            {
                ans += itr->second*(itr->second-1);
            }
        }
        return ans/2;
    }
};