//Author: Jestin Roy
//Handle Name: jestinroy3 
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define mod 1000000007
#define int long long int
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846
#define MAX 1e15

void solve()
{
    //start solving the problem from here on
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    int sum = 0;
    for(auto &i : a)
    {
        cin >> i;
        sum += i;
    }
    cout << sum % m << endl;
}

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    for (int caseNum = 1; caseNum <= t; caseNum++)
    {
        cout << "Case #" << caseNum << ": ";
        solve();
    }
}