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
    ;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n, greater<int>());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            if (arr[i] % 2 == 0)
                ans += arr[i];
        }
        else {
            if (arr[i] % 2 == 1)
                ans -= arr[i];
        }

    }

    if (ans == 0)
        cout << "Tie" << endl;
    else if (ans > 0)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;

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
