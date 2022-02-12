#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
// #define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15
int arraySortedOrNot(vector<int> arr, int n)
{
    // Array has one or no element or the
    // rest are already checked and approved.
    if (n == 1 || n == 0)
        return 1;
 
    // Unsorted pair found (Equal values allowed)
    if (arr[n - 1] < arr[n - 2])
        return 0;
 
    // Last pair was sorted
    // Keep on checking
    return arraySortedOrNot(arr, n - 1);
}

void solve()
{
    int n;
	cin >> n;
	vector<int> a(n);
	for(auto &i : a){
        cin >> i;
    }
	int c0 = 0, c1 = 0, cx = 0;
	int sum = 0;
	for (int i = 1; i + 1 < n; i++)
	{
		if (a[i] == 1) 
		{
			cx++;
		}
		if (a[i] % 2 == 0) c0++;
		else c1++;
		sum += a[i];
	}
	if ((c1 == cx || c1 == 1) && c0 == 0)
	{
        cout << -1 << endl;
        return;
	}
	int ans = 0;
	if (cx == c1)
	{
		if (c1 % 2)
		{
			ans++;
			sum--;
		}
		ans += c1 / 2;
		ans += sum / 2;
	}
	else
	{
		if (c1 % 2)
		{
			ans++;
			sum--;
		}
		ans += c1 / 2;
		ans += sum / 2;
	}
    cout << ans << endl;
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";

        solve();
    }
}