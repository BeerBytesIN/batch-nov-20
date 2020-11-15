#include<bits/stdc++.h>
using namespace std;
int find_minimum_Distance(int n,int c,int arr[]){
    // input may not be in sorted order so first sort it
    sort(arr,arr+n);
    int low=arr[0], high=arr[n-1];
    while(low<=high){
        int gap=(high+low)/2;
        gap--;
        int prev=low;
        int count=1;
        for(int i=1;i<n;i++){
            int diff=arr[i]-prev;
            if(diff>=gap) {
                prev=i;
                count++;
            }
        }
        if(count>=c) low=gap+1;
        else high=gap-1;
    }
    return low;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<find_minimum_Distance(n,c,arr)<<endl;
    }
}