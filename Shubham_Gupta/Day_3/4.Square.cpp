#include<bits/stdc++.h>
using namespace std;
// Approach 1: O(n*longn)
bool find(int x){
       
        // if(x<=1) return x;
        // int ans=0;
        // long long start=0,end=x;
        // long long mid;
        // while(start<=end){
        //   mid=(start+end)/2;
        //   long long a=mid*mid;
        //   if(a==x) return true;
        //   else if(a>x) end=mid-1;
        //   else start=mid+1;
        // }
        // return false;
        int ans=1;
        int i=1;
        while(ans<=x){
            i++;
            ans=i*i;
        }
        return x==(i-1)*(i-1);
  }
    int countSquares(int N) {
        int count=0;
        for(int i=1;i<N;i++)
          if(find(i)) count++;
        return count;
    }
//=====================================================================
// Approach 2: T.C= O(sqrt(n))
int countSquares(int N) {
        int count=0;
        int l=1;
        int r=N-1;
        int number = ceil(sqrt(l)); 
  
        int n2 = number * number; 
        number = (number * 2) + 1; 
 
        while ((n2 >= l && n2 <= r)) { 
         count++;
        n2 = n2 + number; 
        number += 2; 
        } 
        return count;
    }
int main(){
    int n;
    cin>>n;
}