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
        ll a, b;
        cin >> a >> b;
        //bitwise and to check if b = 2^p
        cout << ((b & (b - 1ll)) ? "No" : "Yes") << endl;
        //ternary operator print yes & no in the same line
    }
    return 0;
}
