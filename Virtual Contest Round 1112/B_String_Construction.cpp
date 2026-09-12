#include <bits/stdc++.h>
using namespace std;

void solveB()
{
    int n, k;
    cin >> n >> k;

    if (k != n - 1)
    {
        int B = n - k, cnt1 = (n + 1) >> 1, cnt0 = n >> 1, b1 = (B + 1) >> 1, b0 = B >> 1;
        vector<int> blocks1(b1, 1); blocks1.back() += (cnt1 - b1);
        vector<int> blocks0(b0, 1); blocks0.back() += (cnt0 - b0);

        string ans = "";
        int p1 = 0, p0 = 0, i = 0;
        while (i < B) { (i & 1) ? (ans += string(blocks0[p0++], '0')) : (ans += string(blocks1[p1++], '1')); i++; }
        cout << ans << "\n";
    }
    else cout << -1 << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solveB();
    return 0;
}
