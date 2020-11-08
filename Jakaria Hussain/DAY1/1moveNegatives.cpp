// Problem Link : https://www.geeksforgeeks.org/move-negative-numbers-beginning-positive-end-constant-extra-space/
// IDE Link : https://ide.geeksforgeeks.org/7lj0lUCv1D 
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int arr[n] = {1,2,3};
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // Method 1 : sorting the array, but this will change the order of the array.
    
    // Method 2 : Two pointer approach
    
    int start = 0, end = n-1;
      
    while(start < end){
        if(arr[start]<0) start++;
        else {
            if(arr[end]<0) 
                swap(arr[start],arr[end]);
            end--;
        }
            
    }
    
    for(auto x : arr) cout<<x<<" ";
    
    return 0;
    
}

// Input : 4
//         1 2 -1 0
// Output : -1 2 1 0
