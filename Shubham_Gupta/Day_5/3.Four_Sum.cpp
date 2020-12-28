#include <iostream>
using namespace std;
vector<vector<int>> fourSum(vector<int> &nums, int target)
{
    int n = nums.size();
    vector<vector<int>> arr;
    if (n <= 3)
    {

        return arr;
    }
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 3; i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n - 2; j++)
        {
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int start = j + 1;
            int end = n - 1;
            while (start < end)
            {
                int no = nums[i] + nums[j] + nums[start] + nums[end];
                if (no == target)
                {
                    arr.push_back({nums[i], nums[j], nums[start], nums[end]});
                    end--;
                    while (end > start && nums[end] == nums[end + 1])
                        end--;
                }

                else if (no > target)
                    end--;
                else
                    start++;
            }
        }
    }
    return arr;
}
int main()
{
    vector<int> arr = {2, 7, 11, 15};
    fourSum(arr, 9);
    return 0;
}