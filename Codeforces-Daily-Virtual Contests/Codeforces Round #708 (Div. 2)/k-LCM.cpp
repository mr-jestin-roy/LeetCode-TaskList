#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define endl "\n"
#define mod 1000000007
#define fast
#define PI 3.14159265358979323846
#define MAX 1e5

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        if (n % 4 == 0 && n % 2 == 0)
            cout << n / 2 << " " << n / 4 << " " << n / 4 << endl;
        else if (n % 2 == 0)
            cout << n / 2 - 1 << " " << n / 2 - 1 << " " << 2 << endl;
        else if (n % 2)
            cout << 1 << " " << n / 2 << " " << n / 2 << endl;
    }
}