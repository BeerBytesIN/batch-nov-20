#include <iostream>
using namespace std;
// leetcode 1
 vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        multimap<int,int> map;
        for(int i=0;i<n;i++)
            map.insert({nums[i],i});
        
        vector<int>ans(2,0);
        for(int i=0;i<n;i++)
        {
            auto it=map.find(target-nums[i]);
            if(it!=map.end() && it->second!=i)
            {
                ans[0]=i;
                ans[1]=it->second;
                return ans;
            }
        }
        return ans;
    }            }
        }
        return ans;
}
int main(){
    vector<int> arr={2,7,11,15};
    twoSum(arr,9);
    return 0;
}