#include "bits/stdc++.h"
using namespace std;
#define int long long
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define all(x) (x).begin(), (x).end()
#define uniq(v) (v).erase(unique(all(v)), (v).end())
#define sz(x) (int)((x).size())
#define fr first
#define sc second
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define mem1(a) memset(a, -1, sizeof(a))
#define mem0(a) memset(a, 0, sizeof(a))
#define ppc __builtin_popcount
#define ppcll __builtin_popcountll

template <typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &a)
{
	in >> a.fr >> a.sc;
	return in;
}
template <typename T1, typename T2>
ostream &operator<<(ostream &out, pair<T1, T2> a)
{
	out << a.fr << " " << a.sc;
	return out;
}
template <typename T, typename T1>
T amax(T &a, T1 b)
{
	if (b > a)
		a = b;
	return a;
}
template <typename T, typename T1>
T amin(T &a, T1 b)
{
	if (b < a)
		a = b;
	return a;
}

const long long INF = 1e18;
const int32_t M = 1e9 + 7;
const int32_t MM = 998244353;

const int N = 2e5 + 5;

int a[N];

bool check(vector<int> &v)
{
	int n = sz(v);
	rep(i, 0, n)
	{
		rep(j, i + 1, n)
		{
			rep(k, j + 1, n)
			{
				if ((v[i] >= v[j] && v[j] >= v[k]) ||
					(v[i] <= v[j] && v[j] <= v[k]))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void solve()
{
	string s;
	cin >> s;
	char cnt = '0';
	for (int i = 0; i < s.size(); i++)
		if (s[i] > cnt)
			cnt = s[i];

	cout << cnt << "\n";
}
signed main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//freopen("input.txt", "r", stdin);
//freopen("output.txt", "w", stdout);
#ifdef SIEVE
	sieve();
#endif
	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}
