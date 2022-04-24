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
    string line;
    cin >> line;
    int n = line.size();
    int i = n - 1;
    //case insenstive
    if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U'){
        cout << line << " is ruled by Alice." << endl;
        return;
    }
    if(line[i]=='y' || line[i]=='Y'){
        cout << line << " is ruled by nobody." << endl;
        return;
    }
    else{
        cout << line << " is ruled by Bob." << endl;
    }
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
