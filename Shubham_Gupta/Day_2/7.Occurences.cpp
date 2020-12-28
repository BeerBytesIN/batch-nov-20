#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int k;
    for(int i=0;i<n;i++)cin>>a[i];
    cin>>k;
    unordered_map<int,int> map;
    for(int i=0;i<n;i++)map[a[i]]++;

    for(auto it:map)
        if(map[it.second]>(n/k)) cout<<it.first<<" ";
    return 0;
}