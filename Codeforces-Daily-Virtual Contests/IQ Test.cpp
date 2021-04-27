#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<bool> vb;
typedef vector<char> vc;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define min3(a, b, c) min(min(a, b), c)
#define min4(a, b, c, d) min(min(a, b), min(c, d))
#define max3(a, b, c) max(max(a, b), c)
#define max4(a, b, c, d) max(max(a, b), max(c, d))
#define INF INT_MAX
#define all(x) x.begin(),x.end()

void solve()
{
    int n;
    cin >> n;
    vi p[2];
    int x;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        p[x % 2].PB(i);
    }
    if (p[0].size() == 1)
    {
        cout << p[0][0] << endl;
        return;
    }
    else
        cout << p[1][0] << endl;

}

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    t = 1;

    while (t--)
    {
        solve();
    }
    return 0;
}