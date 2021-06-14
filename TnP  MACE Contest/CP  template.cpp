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
ll a, b;
int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    ll t, n, a[100], temp;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 0;
        for (int i = n - 1; i > -1; i--) {
            if (s[i] == ')')
                count++;
            else
                break;
        }
        if (count > n / 2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}

