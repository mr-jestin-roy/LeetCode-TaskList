#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long sum = 0;
        cin >> n;
        vector<int> a(n);
        for (auto &x : a)
        {
            cin >> x;
            sum += x;
        }
        int k = sum % n;
        cout << 1LL * k * (n - k) << "\n";
    }
    return 0;
}