#include <iostream>
#include <unordered_map>
using namespace std;
///====================================================================
// Approach 1: Recursion
int ans = INT_MAX;
void jump(int a[], int n, int i, int count)
{
    if (i >= n - 1)
    {
        ans = min(ans, count);
        return;
    }

    for (int jmp = 1; jmp <= a[i]; jmp++)
        jump(a, n, i + jmp, count + 1);

    return;
}
int minJumps(int arr[], int n)
{

    if (n == 0 || arr[0] == 0)
        return -1;
    jump(arr, n, 0, 0);
    return ans == INT_MAX ? -1 : ans;
}
//===========================================================
// Approach 2: DP
int minJumps(int arr[], int n)
{

    if (n == 0 || arr[0] == 0)
        return -1;
    int ans = INT_MAX;
    int *dp = new int[n]();
    for (int i = 0; i < n; i++)
        dp[i] = INT_MAX - 10;
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i <= j + arr[j])
                dp[i] = min(dp[i], dp[j] + 1);
        }
    }
    return dp[n - 1] == INT_MAX - 10 ? -1 : dp[n - 1];
}
// ============================================================================
// Approach 3: O(n)
int minJumps(int nums[], int n)
{

    if (n == 0)
        return 0;
    if (n == 1 || nums[0] == 0)
        return -1;

    int max_jump = nums[0];
    int current = nums[0];
    int jump = 1;
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jump;
        max_jump = max(max_jump, i + nums[i]);
        current--;
        if (nums[i] == 0 && max_jump == i)
            return -1;
        if (current == 0)
        {
            jump++;
            current = max_jump - i;
        }
    }
    return jump;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << minJumps(a, n);
    }
    return 0;
}