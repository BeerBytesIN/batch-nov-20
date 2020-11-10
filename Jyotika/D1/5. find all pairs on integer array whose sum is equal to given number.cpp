
/* still needs to be optimized */
#include <bits/stdc++.h>
using namespace std;




class Solution{   
public:
    int getPairsCount(int ar[], int n, int k) {
        // code here
        
        sort(ar, ar+n);
        
        int left = 0;
        int right = n-1;
        int ans=0;
        
        while(left<right){
          if(ar[left]+ ar[right]>k){
              right--;
          }
          else if(ar[left] + ar[right]<k){
              left++;
          }
          else if((ar[left] + ar[right])==k){
              if(ar[left]==ar[right]){
                  ans+= right - left +1;
                  left ++;
                  right--;
              }
              else{
                  int x = ar[left];
                  int y = ar[right];
                  int x1=0, y1=0;
                  while(ar[left]==x){
                      x1++;
                      left++;
                  }
                  while(ar[right]==y){
                      y1++;
                      right--;
                  }
                  ans+= x1* y1;
              }
          }            
            
        }
        return ans;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } Driver Code Ends