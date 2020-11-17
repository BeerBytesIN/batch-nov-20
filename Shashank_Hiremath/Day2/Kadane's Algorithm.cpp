/**
 *    author:  shashank_hire
**/
#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
#define ld long double
#define MOD 1000000007

int maxSubarraySum(int arr[], int n){   //Easy. Standard Kadanes
    
    int max_sum = arr[0], curr_sum = arr[0], i;
    for(i=1;i<n;i++)
    {
        curr_sum = max(curr_sum + arr[i], arr[i]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
    
}