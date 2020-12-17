#include<iostream>
using namespace std;
// 287
int findDuplicate(vector<int> &nums)
{

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == i + 1)
            continue;
        while (nums[i] != i + 1)
        {
            int j = nums[i] - 1;
            if (nums[j] == j + 1)
                break;
            swap(nums[i], nums[j]);
        }
    }
    for (int i = 0; i < nums.size(); i++)
        if (nums[i] != i + 1)
            return nums[i];

    return -1;
}
int findDuplicate(vector<int>&a){
    int left=1;
    int right=a.size()-1;
    while(left<=right){
        int mid=(left+right)/2;
        int count=0;
        for(int ele:a){
            if(ele<=mid) count++;
        }

        if(count>mid) right=mid-1;
        else left=mid+1;
    }
    return left;
}
int main()
{
    vector<int> a = {4, 5, 6, 1, 2, 3, 3};
    cout << findDuplicate(a);
    return 0;
}