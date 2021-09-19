#include <bits/stdc++.h>
using namespace std;

int main(){
    int i=1;
    int t;
    cin>>t;
    while(t--){
        int d,n,k;  cin>>d>>n>>k;
        map<int, vector<int>> mp;
        
        while(n--){
            int h;
            int s;
            int e;
            cin>>h>>s>>e;
            for(int j=s;j<=e;j++){
                mp[j].push_back(h);
            }
        }
        int anw=0;
        for(auto w:mp){
            int x = 0;
            int p = w.second.size();
            sort(w.second.begin(), w.second.end(), greater<int>());
            for(int j=0;j<k&&j<p;j++){
                x+=w.second[j];
            }
            anw=max(anw,x);
        }
        cout<<"Case #"<<i<<": "<<anw<<endl;
        i++;
    }
    return 0;
}