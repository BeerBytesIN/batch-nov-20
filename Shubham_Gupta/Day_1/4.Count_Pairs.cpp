#include <iostream>
using namespace std;
// Count Pairs with given sum
int getPairsCount(int a[], int n, int k) {
        unordered_map<int,int> map;
        for(int i=0;i<n;i++) map[a[i]]++;
        int ans=0;
        for(int i=0;i<n;i++){
            if(map.find(k-a[i])==map.end()) continue;
            map[a[i]]--;
            ans+=map[k-a[i]];
        }
        return ans;
    }
int main()
{
    int a[]={1,1,1,1};
    cout << getPairsCount(a,4,2);
    return 0;
}