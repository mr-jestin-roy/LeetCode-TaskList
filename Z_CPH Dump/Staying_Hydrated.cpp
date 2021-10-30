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
    int k;
    cin>>k;
    vector<int> x,y;
    for(int i=0;i<k;i++){
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        x.push_back(x1);
        x.push_back(x2);
        y.push_back(y1);
        y.push_back(y2);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    
    cout<<min(x[k],x[k-1])<<" "<<min(y[k],y[k-1])<<endl;

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