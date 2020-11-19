//https://leetcode.com/problems/find-the-duplicate-number/
#include<iostream>
using namespace std;
int findDuplicatemutable(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[arr[i]]<0){
            return arr[i];
        }
        arr[arr[i]]=arr[arr[i]]*(-1);
    }
    return -1;
}
int findDuplicateimmutable(int nums[]) {
    int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
            cout<<"slow: "<<slow<<" fast: "<<fast<<endl;
            
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return fast;
}
int main(){
    int arr[]={1,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);  
    cout<<"Immutable: "<<findDuplicateimmutable(arr)<<" Mutable: "<<findDuplicatemutable(arr,n);
    return 0;
}