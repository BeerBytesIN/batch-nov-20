#include<bits/stdc++.h>
using namespace std;

// Leetcode 1109
// Approach 1: O(n*m) T.C. 
     vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n,0);
        int m=bookings.size();
        for(vector<int> a:bookings){
            int i=a[0]-1;
            int j=a[1]-1;
            int k=a[2];
            while(i<=j){
                ans[i]+=k;
                i++;
            }
        }
        return ans;
    }
    
    // Approach 2: O(n) T.C.
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector<int> ans(n,0);
        for(auto &a:bookings){
            int i=a[0]-1,j=a[1],k=a[2];
            ans[i]+=k;
            if(j<n) ans[j]-=k;
        }
        
        for(int i=1;i<n;i++) ans[i]+=ans[i-1];
        return ans;
    }
int main(){
	vector<vector<int>>n={{1,2,10},{2,3,20},{3,5,10}};
	intersect(n,5);
	return 0;
}