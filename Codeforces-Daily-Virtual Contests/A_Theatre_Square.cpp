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

    int n, m, a;
    cin >> n >> m >> a;
    int b = (n + a - 1) / a;
    int c = (m + a - 1) / a;
    cout << b * c;
}