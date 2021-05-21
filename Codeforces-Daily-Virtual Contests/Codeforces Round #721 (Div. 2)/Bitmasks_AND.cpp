#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define MAX 1e15

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        //number of powers of 2 before n starting from 1
        while (n != 0)
        {
            n /= 2;
            count++;
        }
        int ans = (1 << (count - 1)) - 1;

        cout << ans << endl;
    }
}