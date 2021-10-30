#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846



int32_t main()
{
    fast;
    cout << fixed << setprecision(20);

    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        string s; cin>>s;
        int zeroes = count(s.begin(),s.end(),'0');
        if(zeroes == 0)
        {
            cout<<0<<endl;
            continue;
        }
        int first = s.find('0');    //first occ
        int last = s.rfind('0');    //last occ
        if(last - first +1 == zeroes)   //check for consequent 0s
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
}
