#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define int long long int
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define PI 3.14159265358979323846


void solve() 
{ 
    int n; 
     cin >> n; 
 int arr[n]; 
 for (int i = 0; i < n; i++) { 
  cin >> arr[i]; 
 } 
 int o = 0, e = 0; 
 for (int i = 0; i < n; i++) { 
  if (arr[i] % 2 == 0) { 
   e++; 
  } else { 
   o++; 
  } 
 } 
 if (e == 0 and o > 0) { 
  cout << -1 << endl; 
  return; 
 } 
 if (o == 0 and e > 0) { 
  cout << -1 << endl; 
  return; 
 } 
 if (o > 0 and e > 0) { 
  for (int i = 0; i < n; i++) { 
   if (arr[i] % 2 != 0) { 
    cout << arr[i] << " "; 
   } 
  } 
  for (int i = 0; i < n; i++) { 
   if (arr[i] % 2 == 0) { 
    cout << arr[i] << " "; 
   } 
  } 
  cout<<endl;
 } 
} 

int32_t main()
{
    fast;
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    //     int n;
    //     cin>>n;
    //     int a[n];
    //     int odd = 0,even =0;
    //     vector<int> v1;
    //     vector<int> v2;
    //     for(int i=0;i<n;i++){
    //         cin>>a[i];
    //         if(a[i] % 2 == 0)
    //            { even++;
    //                 v1.push_back(a[i]);
    //            }
    //         else
    //            { odd++;
    //                  v2.push_back(a[i]);
    //            }
    //     }
    //     if(odd > 0 && even == 0){
    //         cout<<-1<<endl;
    //     }
    //     else if(odd== 0 || even > 0){
    //         cout<<-1<<endl;
    //     }
    //     else{
            
     
    // sort(v1.begin(),v1.end());
    // sort(v2.begin(),v2.end());
    // for (int i = 0,j=0,k=0; i < n || j< v2.size() || k < v1.size(); i++)
    // {
    //     if(i%2 == 0)
    //         cout<<v2[j++]<<" ";
    //     else
    //         cout<<v1[k++]<<" ";
    // }

    // cout<<endl;    
    // }


    }
}