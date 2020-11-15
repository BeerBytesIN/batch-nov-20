#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		for (int i = 0; i < n; i++)
			cin >> a[i];
		for (int i = 0; i < m; i++)
			cin >> b[i];
		unordered_map<int, bool> map;
		for (int i = 0; i < n; i++)
			map[a[i]] = true;
		int count = 0;
		for (int i = 0; i < m; i++)
		{
			if (map[b[i]])
				count++;
		}
		if (count == m)
			cout << "Yes";
		else
			cout << "No";
		cout << endl;
	}
	return 0;
}