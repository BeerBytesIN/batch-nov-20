#include <iostream>
using namespace std;
// Approach 1: Recursion
int n;
int find_substring(string &s, int i, int j, int **dp)
{
    if (i > j)
        return 0;
    if (i == n && j == n)
        return dp[i][j] = 0;
    if (dp[i][j] >= 0)
        return dp[i][j];

    if (i == j)
        return dp[i][j] = 1;
    else if (s[i] == s[j] && j - i == 1)
        dp[i][j] = 2;
    else if (s[i] == s[j] && find_substring(s, i + 1, j - 1, dp) > 0)
        dp[i][j] = dp[i + 1][j - 1] + 2;
    else
        dp[i][j] = 0;

    find_substring(s, i + 1, j, dp);
    find_substring(s, i, j - 1, dp);

    return dp[i][j];
}
string longestPalindrome_RECURSION(string &s)
{
    n = s.length();
    if (n == 0)
        return "";

    int **dp = new int *[n + 1];
    for (int i = 0; i <= n; i++)
        dp[i] = new int[n + 1]();

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n; j++)
            dp[i][j] = -1;

    find_substring(s, 0, n - 1, dp);

    int len = 1;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (dp[i][j] > len)
            {
                len = dp[i][j];
                start = i;
            }
        }
    }

    return s.substr(start, len);
}

//==========================================================================
// Approach 2: DP
string longestPalindrome_DP(string &s)
{
    int n = s.length();
    if (n == 0)
        return "";
    int dp[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            dp[i][j] = 0;

    int len = 1;
    int start = 0, end = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = i; j < n; j++)
        {
            if (i == j)
            {
                dp[i][j] = 1;
                continue;
            }
            if (s[i] == s[j] && j - i == 1)
                dp[i][j] = 2;
            else if (s[i] == s[j] && dp[i + 1][j - 1] > 0)
                dp[i][j] = dp[i + 1][j - 1] + 2;

            if (dp[i][j] > len)
            {
                len = dp[i][j];
                start = i;
                end = j;
            }
        }
    }

    return s.substr(start, len);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << longestPalindrome_RECURSION(s) << endl;
        cout << longestPalindrome_DP(s) << endl;
    }
    return 0;
}