#include <bits/stdc++.h>
#define int long long int
#define pb push_back
#define mp make_pair
#define fi first
#define sc second
#define f(i,n) for(int i=0;i<n;i++)
#define forall(i,a,b) for(int i=a;i<b;i++)
#define INF 2147483647
using namespace std;
typedef  pair<int,int> pii;
typedef  vector<int>   vi;
typedef  vector<pii> vii;
void twoPointerApproach(int A[],int n){
    int left=0;
   int right=n-1;
   while(left<right){
       if(A[left]<0){
           if(A[right]<0)left++;
       }
      else if(A[left]>0&&A[right]<0){
           swap(A[left],A[right]);
           left++;
           right--;
       }
       else if(A[left]>0&&A[right]>=0)right--;
       else{
           left++;
           right--;
       }
   }


}
int32_t main()
{

  int n;
  cin>>n;
  int a[n];
  f(i,n)cin>>a[i];
  //quick sort approach
  int ind=-1;
  for(int i=0;i<n;i++){
      if(a[i]<0){
          ind++;
          swap(a[i],a[ind]);
      }
  }
  for(int i=0;i<n;i++)cout<<a[i]<<" ";


    return 0;
}