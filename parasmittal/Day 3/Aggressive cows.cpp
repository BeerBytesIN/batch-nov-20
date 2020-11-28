#include <iostream>
using namespace std;
#include<bits/stdc++.h>
bool check(int curr_max,int arr[],int n,int c){
    int cow=1;
    int last_pos=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-last_pos>=curr_max){
            last_pos=arr[i];
            cow++;
            if(cow==c){
                return true;
            }
        }
    }
    return false;
}
int main() {
int t;
cin>>t;
while(t--){
    int n,c;
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int low=0;
    int high=arr[n-1];
    int result=0;
    int mid;
    while(low<=high){
        mid=high-(high-low)/2;
        if(check(mid,arr,n,c)){
            result=max(result,mid);
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    cout<<result<<endl;
}
	return 0;
}