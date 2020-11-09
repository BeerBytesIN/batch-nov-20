#include <iostream>
#include <unordered_map>
using namespace std;
void nextPermutation(int nums[], int n)
{
    if (n == 0)
        return;
    int i1 = 0;
    int i2 = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            i1 = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (nums[i] > nums[i1])
        {
            i2 = i;
            break;
        }
    }
    swap(nums[i1], nums[i2]);
    int i;
    if (i1 == i2)
        i = 0;
    else
        i = i1 + 1;
    int j = n - 1;
    while (i < j)
    {
        swap(nums[i++], nums[j--]);
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    nextPermutation(a, n);
    return 0;
}