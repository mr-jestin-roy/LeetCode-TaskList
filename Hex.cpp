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
    int n;
    cin>>n;
    int r = 0, b = 0;
    char a[n][n];
    
    for (int i = 0;i<n;i++){
        for (int j = 0; j < n;j++){
            cin >> a[i][j];
            if(a[i][j]=='R') r++;
            if(a[i][j]=='B') b++;
        }
    }
   
    if(r+b == 0){
        cout << "Nobody wins" << endl;
        return;
    }
    if(r==1 && n==1 && b==0){
        cout << "Red wins" << endl;
        return;
    }
    if (b == 1 && n == 1 && r == 0)
    {
        cout << "Blue wins" << endl;
        return;
    }
    cout << "Find out who wins" << endl;
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