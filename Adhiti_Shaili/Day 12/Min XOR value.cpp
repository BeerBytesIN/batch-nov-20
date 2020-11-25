#include<bits/stdc++.h>
using namespace std;

int Solution::findMinXor(vector<int> &A) {
    int maxi=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++)
    {
        maxi=min(maxi,A[i]^A[i+1]);
    }
    return maxi;
}