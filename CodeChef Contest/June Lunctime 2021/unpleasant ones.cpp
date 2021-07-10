#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define ll long long int

int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> odd, even;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x & 1)
                odd.push_back(x);
            else
                even.push_back(x);
        }
        for (auto i : even)
            cout << i << " ";
        for (auto i : odd)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}
