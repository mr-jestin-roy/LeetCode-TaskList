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
    map<int,int> hash;
    int n;
    cin >> n;
    vector<int> a(n);
    for(auto &i:a){
        cin >> i;
    }

    int currH, prevH = 0, cnt = 0;
    for (int i = 0; i < n; i++){
        currH = prevH + 1;
        hash[a[i]]++;
        if(a[i] >= currH)
            cnt++;
        
        if(cnt >= currH){
            cout << currH << " ";
            ++prevH;
            cnt -= hash[currH];
        }
        else{
            cout << prevH << " ";
        }
    }
    cout << endl;
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