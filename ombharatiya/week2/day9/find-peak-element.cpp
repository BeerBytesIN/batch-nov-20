// https://leetcode.com/problems/find-peak-element/

#include <bits/stdc++.h>
using namespace std;

// Time -- O(logN)
// Space -- O(1)

class Solution {
public:
    int findPeakElement(vector<int>& A) {
        
        int n = A.size();
        
        int l=0, h=n-1, mid;
        if(n==0) return -1;
        else if(n==1) return 0;
        else if(n==2) {
            if(A[0]>A[1]) return 0;
            else if(A[0]<A[1]) return 1;
            else return -1;
        }
        else if(n>2) {
            if(A[0]>A[1]) return 0;
            else if (A[n-1]>A[n-2]) return n-1;
        }
        
        while(l<=h) {
            mid = l + (h-l)/2;
            if(mid>0 && A[mid-1] < A[mid] && mid<n-1 && A[mid+1] < A[mid]) return mid;
            else if(mid>0 && A[mid-1] > A[mid]) h = mid-1;
            else l = mid+1;
        }
        return -1;
    }
};