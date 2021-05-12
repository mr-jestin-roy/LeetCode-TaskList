#include <bits/stdc++.h>
using namespace std;
#define FAST ios_base::sync_with_stdio(false), cin.tie(NULL)
#define mod 1000000007
#define int long long int

bool perfectSquare(int k) {
    for (int i = 1; i * i <= k; i++) {
        if (i * i == k)
            return true;
    }
    return false;
}

void solve() {
    int n,m;
    cin >> n>>m;
    int ans = 0;
    vector<int> modular(n+1,1);
    for (int i = 2; i <= n; i++)
    {
        int a = m%i;
        ans += modular[a];
       for(int j=a;j<=n;j+=i)
        modular[j]++;
    }
    cout << ans << endl;
}

int32_t main() {
    FAST;

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}