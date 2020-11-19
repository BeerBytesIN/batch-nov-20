#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int>& prices) {
    int result=0,minvalue=INT_MAX;
    for(int i=0;i<prices.size();i++){
        minvalue=min(minvalue,prices[i]);
        result=max(result,prices[i]-minvalue);
    }
    return result;
}
int main(){
    vector<int> stocks={7,1,5,3,6,2};
    cout<<maxProfit(stocks);
    return 0;
}