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
    int r,c;
    cin >> r >> c;
   
    vector<vector<int>> a(r,vector<int> (c));

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    vector<vector<int>> N(r,vector<int> (c));
    vector<vector<int>> E(r,vector<int> (c));
    vector<vector<int>> W(r,vector<int> (c));
    vector<vector<int>> S(r,vector<int> (c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){   
            if(a[i][j]){        
                W[i][j] = 1;         //from left side
                if(j >= 1)
                    W[i][j] += W[i][j-1];
            }
        }
    
        for(int j= c-1; j>=0;j--){   
            if(a[i][j]){        
                E[i][j] = 1;         //from right side
                if(j+1 < c)
                    E[i][j] += E[i][j+1];
            }
        }
    }

    for(int j=0;j<c;j++){
       for(int i=0;i<r;i++){   
            if(a[i][j]){        
                N[i][j] = 1;         //from top side
                if(i >= 1)
                    N[i][j] += N[i-1][j];
            }
        }
    
        for(int i=r-1;i>=0;i--){
            if(a[i][j]){        
                S[i][j] = 1;         //from bottom side
                if(i+1 < r)
                    S[i][j] += S[i+1][j];
            }
        }
    }
    int ans =0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            ans += max(0,min(W[i][j],N[i][j]/2) - 1);
            ans += max(0,min(W[i][j]/2,N[i][j]) - 1);
            ans += max(0,min(W[i][j],S[i][j]/2) - 1);
            ans += max(0,min(W[i][j]/2,S[i][j]) - 1);

            ans += max(0,min(E[i][j],N[i][j]/2) - 1);
            ans += max(0,min(E[i][j]/2,N[i][j]) - 1);
            ans += max(0,min(E[i][j],S[i][j]/2) - 1);
            ans += max(0,min(E[i][j]/2,S[i][j]) - 1);
        }
    }

    cout<<ans<<endl;    //final count of L shaped plots
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