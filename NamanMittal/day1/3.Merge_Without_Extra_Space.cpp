//https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#
#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n=4,m=5,arr1[]={1,3,5,8},arr2[]={0,2,4,6,9};
    print(arr1,n);
    print(arr2,m);
    cout<<endl;
	int total=n+m;
    float gap=n+m;
	for(int x=0;x<ceil(log2(total));x++){
	    gap=ceil(gap/2);
	    for(int i=0;i+gap<total;i++){
	        int j=i+gap;
	        if(i<n and j<n){
	            if(arr1[i]>arr1[j]){
	                swap(arr1[i],arr1[j]);
	            }
	        }
	        else if(i<n and j>=n){
	            if(arr1[i]>arr2[j-n]){
	                swap(arr1[i],arr2[j-n]);
	            }
	        }
	        else if(i>=n and j>=n){
	            if(arr2[i-n]>arr2[j-n]){
	                swap(arr2[i-n],arr2[j-n]);
	            }
	        }
	    }
	}
    print(arr1,n);
    print(arr2,m);
    return 0;
}