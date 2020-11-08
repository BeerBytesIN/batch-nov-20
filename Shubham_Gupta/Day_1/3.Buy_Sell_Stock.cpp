#include <iostream>
using namespace std;
// leetcode 121
 int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<=1) return 0;
        int buy_idx=-1,buy=INT_MAX,sell=0,diff=0;
        for(int i=0;i<n;i++){
            if(buy>prices[i]){
                buy=prices[i];
                buy_idx=i;
            }
            
            if(i>buy_idx && prices[i]>buy){
                sell=prices[i];
                diff=max(diff,sell-buy);
            }
        }
        return diff;
}
int main()
{
    vector<int> a = {4, 5, 6, 1, 2, 3, 3};
    cout << findDuplicate(a);
    return 0;
}