#include<bits./stdc++.h>
using namespace std;
// leetcode 69
int mySqrt(int x) {
        if(x<=1) return x;
        int ans=0;
        long long start=0,end=x;
        long long mid;
        while(start<=end){
           mid=(start+end)/2;
           long long a=mid*mid;
           if(a==x) return mid;
           else if(a>x) end=mid-1;
           else start=mid+1;
        }
        return end;
    }
 int main(){
 	cout<<mySqrt(10);
 	return 0;
 }