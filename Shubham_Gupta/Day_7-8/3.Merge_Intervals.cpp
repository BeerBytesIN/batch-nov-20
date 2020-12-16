#include<bits/stdc++.h>
using namespace std;
// leetcode 56
vector<vector<int>> merge(vector<vector<int>>& intervals) { 
        vector<vector<int>> ans;
        int n=intervals.size();
        if(n==0) return ans;
        // sort(intervals.begin(),intervals.end(),[](vector<int>&a,vector<int>&b){
        //          if(a[0]==b[0]) return b[1]<a[1];
        //          else return a[0]<b[0];
        //      });
        sort(intervals.begin(),intervals.end());
        // for(int i=0;i<n;i++)
        // {
        //     cout<<intervals[i][0]<<" "<<intervals[i][1]<<endl;
        // }
        int i=0;
        while(i<n)
        {
            int j=i;
            int maxx=intervals[i][1];
            while(j<n-1 && maxx>=intervals[j+1][0]){
                 j++;
                maxx=max(maxx,intervals[j][1]);
            }
            vector<int> tmp;
            tmp.push_back(intervals[i][0]);
            tmp.push_back(maxx);
            ans.push_back(tmp);
            i=j+1;
        }
        return ans;
    }
 int main(){
	
	return 0;
}