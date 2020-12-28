#include <iostream>
#include <unordered_map>
using namespace std;
int maxProduct(int *arr, int n)
{
    int n = arr.size();
    int minVal = arr[0];
    int maxVal = arr[0];

    int maxProduct = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
            swap(maxVal, minVal);

        maxVal = max(arr[i], maxVal * arr[i]);
        minVal = min(arr[i], minVal * arr[i]);
        maxProduct = max(maxProduct, maxVal);
    }

    return maxProduct;
}
long long maxProduct(int *arr, int n)
{
    long long ans = 0;
    long long prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod *= arr[i];
        ans = max(ans, prod);
        if (prod == 0)
            prod = 1;
    }
    prod = 1;
    for (int i = n - 1; i >= 0; i--)
    {
        prod *= arr[i];
        ans = max(ans, prod);
        if (prod == 0)
            prod = 1;
    }

    return ans;
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
        cout << maxProduct(a, n);
    }
    return 0;
}