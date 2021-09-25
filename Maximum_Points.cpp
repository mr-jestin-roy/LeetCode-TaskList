#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=1,a,b,c,x,y,z;
     cin>>t;
    while(t--){
        cin>>a>>b>>c;
        cin>>x>>y>>z;
        int ans =0;
        for(int i=0;i<=20;i++){
            for(int j=0;j<=20;j++){
                for(int k = 0;k<=20;k++)
                {
                    if(i*a + j*b + k*c <= 240)
                        ans = max(ans,i*x + j*y + k*z);
                }
            }
        }
        cout<<ans<<endl;
    }
}