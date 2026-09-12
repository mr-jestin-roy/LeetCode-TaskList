#include <bits/stdc++.h>
using namespace std;

void solveA()
{
    int n;
    cin >> n;
    int min_odd = 2e9 + 7;
    int max_even = -1;

    int i = 1;
    while (i <= n)
    {
        int w;
        cin >> w;
        (i & 1) ? (min_odd = min(min_odd, w)) : (max_even = max(max_even, w));
        i++;
    }

    if (n % 2 == 0)
        cout << (min_odd - max_even >= 2 ? "YES\n" : "NO\n");
    else
        cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solveA();
    return 0;
}
