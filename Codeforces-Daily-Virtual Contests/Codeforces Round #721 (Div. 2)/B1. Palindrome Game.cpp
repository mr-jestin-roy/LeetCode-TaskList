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
        string s;
        cin >> s;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << "BOB" << endl;
        }
        else if (count & 1)
            cout << "ALICE" << endl;
        else
            cout << "BOB" << endl;
    }
}