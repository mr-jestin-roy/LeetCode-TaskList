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
void printVector(vector<string> &v)
{
    for (auto x : v)
        cout << x << "\n";
}
void printVector(vector<int> &v)
{
    for (auto x : v)
        cout << x << " ";
    cout << "\n";
}
bool isit(ll n)
{
    ll temp = n;
    while (temp > 0) {
        if (temp % 10 != 0) {
            if (n % (temp % 10) != 0)
                return false;
        }
        temp /= 10;
    }
    return true;
}
void solve() {
    int n;
    cin >> n;
    int l[n], r[n];
    for (int i = 0; i < n; i++)
        cin >> l[i];
    int sum[n], s = 0;
    for (int i = 0; i < n; i++) {
        cin >> r[i];
        sum[i] = l[i] * r[i];
        if (s < sum[i])
            s += sum[i];
    }
    if (count(sum, sum + n, s) > 1) {
        int rmax = *max_element(r, r + n);
        if (count(r, r + n, rmax) > 1) {
            for (int i = 0; i < n; i++) {
                if (rmax == r[i]) {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else {
            for (int i = 0; i < n; i++) {
                if (rmax == r[i]) {
                    cout << i + 1 << endl;
                }
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            if (s == sum[i]) {
                cout << i + 1 << endl;
            }
        }
    }
}

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
        solve();
    }
    return 0;
}
