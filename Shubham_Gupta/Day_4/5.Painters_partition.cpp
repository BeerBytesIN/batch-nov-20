#include <bits/stdc++.h>
using namespace std;

// leetcode 410

// Approach 1: DP
int **dp;
int *sum;
int partition(vector<int> &arr, int k, int i)
{
    if (i == arr.size())
        return 0;
    if (k == 1)
        return dp[i][k] = sum[arr.size()] - sum[i];
    if (dp[i][k] != -1)
        return dp[i][k];
    int ans = INT_MAX;

    // make cut from start+1 to end
    for (int j = i + 1; j <= arr.size(); j++)
    {
        ans = min(ans, max(sum[j] - sum[i], partition(arr, k - 1, j)));
    }
    return dp[i][k] = ans;
}
int splitArray(vector<int> &nums, int m)
{
    int n = nums.size();
    int k = m;
    if (n == 0)
        return 0;
    dp = new int *[n + 1];
    for (int i = 0; i <= n; i++)
        dp[i] = new int[k + 1]();
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= k; j++)
            dp[i][j] = -1;

    sum = new int[n + 1]();
    sum[0] = 0;
    for (int i = 1; i <= n; i++)
        sum[i] = sum[i - 1] + nums[i - 1];
    return partition(nums, m, 0);
}

// Approach 2: Binary Search
int getmin(vector<int> &arr)
{
    int min_time = INT_MIN;
    for (int num : arr)
        min_time = max(min_time, num);
    return min_time;
}
int getmax(vector<int> &arr)
{
    int sum = 0;
    for (int num : arr)
        sum += num;
    return sum;
}

int getPainters(vector<int> &nums, int maxTime)
{
    int sum = 0;
    int painters = 1;
    for (int num : nums)
    {
        sum += num;
        if (sum > maxTime)
        {
            sum = num;
            painters++;
        }
    }
    return painters;
}
int splitArray_DP(vector<int> &nums, int m)
{
    int n = nums.size();
    int target = m;
    int start = getmin(nums);
    int end = getmax(nums);

    int time = INT_MAX;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        int painters = getPainters(nums, mid);

        if (painters > target)
        {
            start = mid + 1;
        }
        else
        {
            time = mid;
            end = mid - 1;
        }
    }
    return time;
}
int main()
{
    int k = 2;
    vector<int> arr = {10, 10, 10, 10};
    cout << splitArray(arr, k) << endl;
    cout << splitArray_DP(arr, k);
}