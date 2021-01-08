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
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        int suma = 0;
        int sumb = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            suma += a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
            sumb += b[i];
        }

        int count = 0;
        if (suma > sumb) {
            cout << 0 << endl;
        }
        else {
            sort(a, a + n);
            sort(b, b + m);
            reverse(b, b + m);
            int i = 0, j = 0;

            for (int i = 0; i < n; i++) {
                if (j < m) {
                    suma += (b[j] - a[i]);
                    sumb += (a[i] - b[j]);
                    swap(a[i], b[i]);
                    count++;
                    j++;
                    if (suma > sumb) {
                        break;
                    }
                }
            }
            if (suma < sumb) {
                cout << -1 << endl;
            }
            else {
                cout << count << endl;
            }
        }
    }
    return 0;
}
