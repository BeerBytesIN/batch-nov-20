#include<iostream>
 using namespace std;
 class Solution {
  public:
       int findDuplicate(vector<int>& nums) {
        max=0,sum=0;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>max)
                 max=v[i];
            sum+=v[i];
        }
        int sum1= max*(max+1)/2;
        
        cout<<sum-sum1;
    }
}
