#include <iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
   int getcount(int arr[],int n,int sum)
  {
      unordered_map<int,int>m;
      for(int i=0;i<n;i++)
          m[arr[i]]++;
     int cnt=0;
     for(int i=0;i<n;i++)
     {
         cnt+=m[sum-arr[i]];
         if(sum-arr[i]==arr[i])
              cnt--;
     }
    return cnt/2;    
  }
int main() {
      int arr[]={1,5,7,-1,5};
      int n= sizeof(arr)/sizeof(arr[0]);
      int sum=6;
      cout<<"no of pairs with given sum: "<<getcount(arr,n,sum); 
}

