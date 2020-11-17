#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int count=0;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++)
        {
            if(map[k-arr[i]])
            {
                count+=map[k-arr[i]];
            }
            map[arr[i]]++;
        }
        return count;
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}