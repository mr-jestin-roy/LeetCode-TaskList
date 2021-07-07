#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1e5
#define int long long int

int32_t main()
{
	FAST;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string a, b;
		cin >> a >> b;
		int even = 0, odd = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] != b[i])
			{
				if (a[i] & 1)
				{
					a[i] = 0;
					even++;
				}
				else
				{
					a[i] = 1;
					odd++;
				}
			}
		}
		if (even == odd)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}