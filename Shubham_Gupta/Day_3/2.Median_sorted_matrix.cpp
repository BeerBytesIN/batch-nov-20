#include <bits/stdc++.h>
using namespace std;
int median(vector<vector<int>> &matrix, int r, int c)
{
    int n = matrix.size();
    if (n == 0)
        return 0;
    int m = matrix[0].size();
    int k = (n * m) / 2 + 1;
    priority_queue<int> que;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            que.push(matrix[i][j]);
            if (que.size() > k)
                que.pop();
        }
    }
    return que.top();
}
int main()
{
    vector<vector<int>> a = {{1, 3, 5}, {2, 4, 6}, {3, 4, 5}};
    cout << median(a, 3, 3);
    return 0;
}