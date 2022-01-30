#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define int long long int
#define mod 998244353
#define endl "\n"
#define inf 1e15

void solve()
{
    string s;
    cin >> s;
    
    stack<char> st;
    char x;
    int count = 0;
    
    for (int i = 0; i < s.size();i++){

        if(s[i]=='('){
            st.push(s[i]);
            continue;
        }
        else if(st.empty()){
            continue;
        }
        else if(s[i] == ')'){
            x = st.top();
            st.pop();
            if(x == '(')
                count++;
        }
    }

    cout << count << endl;
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);
    int t = 1;
    // cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();
    }
}
