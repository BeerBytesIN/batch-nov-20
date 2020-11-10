#include <iostream>
#include <unordered_map>
using namespace std;
int kthSmallest(int arr[], int l, int r, int k) {
    priority_queue<int> que;
    for(int i=l;i<=r;i++){
        que.push(arr[i]);
        if(que.size()>k){
            que.pop();
        }
    }
    
    return que.top();
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<kthSmallest(a,0,n-1,4);
    return 0;
}