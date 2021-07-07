#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1e5
#define int long long int

bool ispalindrome(string &s)
{
	int n = size();
	for (int i = 0; i < n; i++)
	{
		if (s[i] != s[n - 1 - i])
			return false;
	}
	return true;
}

int32_t main()
{
	FAST;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t = 1;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		if (!ispalindrome(s + 'a'))
		{
			cout < "YES" << endl;
			cout << s << 'a' << endl;
		}
		else if (!ispalindrome('a' + s))
		{
			cout << "YES" << endl;
			cout << 'a' << s << endl;
		}
		else
			cout << "NO" << endl;
	}
}