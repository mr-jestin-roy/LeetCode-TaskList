#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846

void solve(){
    int a,b,c,x,y,z;
cin>>a>>b>>c;
cin>>x>>y>>z;
vector<pair<int,int>>ans={{x,a},{y,b},{z,c}};

sort(ans.rbegin(),ans.rend());
int total=240;
int points=0;
points+=ans[0].first * 20;
total-=ans[0].second * 20;
while(total>0){
    for(int i=0;i<20;i++){
        if(total<=0){
            break;
        }
        points+=ans[1].first;
        total-=ans[1].second;
    }
    for(int i=0;i<20;i++){
        if(total<=0){
            break;
        }
        points+=ans[2].first;
        total-=ans[2].second;
    }
    
}
cout<<points+total<<endl;
}

int32_t main()
{
    fast;
    cout << fixed << setprecision(20);

    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout << "Case #" << tt << ": ";
        solve();

    }
}
// int s[3];
//         int t[3];
//         vector<pair<int,int>> v1;
//         for(int i=0;i<3;i++)
//             cin>>s[i];
//         for(int i=0;i<3;i++)
//             cin>>t[i];
//         for(int i=0;i<3;i++)
//             v1.push_back(make_pair(t[i],s[i]));
//         // Using simple sort() function to sort
//         sort(v1.begin(), v1.end());
//         int rem =240;
//         int temp =0;
//         int res =0,i,j;
//         for(i=0;i<20;i++){
//             if(rem <=0)
//                 break;
//             rem -= v1[2].first;
//         }
//         for(j=0;j<20;j++){
//             if(rem <=0)
//                 break;
//             rem -= v1[1].first;
//         }
//         int k = rem/v1[0].first;
//         if(k>20)
//             k = 20;
//         temp +=  i*v1[2].second+j*v1[1].second+k*v1[0].second;
        

        
//         cout<<max(res,temp)<<" "<<rem<<endl;

// int time = 240;
//         for(int i=2;i>=0;i--)
//         {
//             int ans = v1[i].second*20;
//             if(time >= ans)
//                 {
//                     res += 20*v1[i].first;
//                     time -= ans;
//                 }
//             else if(time >0 && time <ans){
//                 int ques = (time/v1[i].second) ;
//                 if(ques > 20)
//                     ques = 20;
//                 time -= ques*v1[i].second;
//                 res += ques*v1[i].first;
//                 // cout<<ques<<endl;
//                 break;
//             }
//         }