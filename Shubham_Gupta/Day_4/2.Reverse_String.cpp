#include <bits/stdc++.h>
using namespace std;
void reverseString(vector<char> &s)
{
    int start = 0;
    int end = s.size() - 1;
    if (end == -1 || end == 0)
        return;
    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
    return;
}
int main()
{
    vector<char> a = {'h', 'e', 'l', 'k'};
    reverseString(a);
    return;
}