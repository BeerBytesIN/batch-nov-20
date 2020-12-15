#include<bits/stdc++.h>
using namespace std;


int findPages(int arr[], int n, int m);

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        cout << findPages(A, n, m) << endl;
    }
    return 0;
}

int findPages(int *arr, int n, int m) {
   int sum=0,maxi=0;
   for(int i=0;i<n;i++)
   {
       sum+=arr[i];
       maxi=max(maxi,arr[i]); 
   }
   int low=maxi;
   int high=sum;
   int ans=-1;
   
   while(low<=high)
   {
       int mid=(low+high)/2;
       int val=0,req=1;
       for(int i=0;i<n;i++)
       {
           if(val+arr[i]<=mid)
           {
               val+=arr[i];
           }
           else
           {
               req++;
               val=arr[i];
           }
       }
       if(req<=m)
       {
           high=mid-1;
           ans=mid;
       }
       else
       {
           low=mid+1;
       }
       
   }
   return ans;
}