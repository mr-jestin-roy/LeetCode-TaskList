// https://www.codechef.com/problems/SEGM01
#include <bits/stdc++.h>

using namespace std;
bool check(){
    string s;  cin>>s;
    int n = s.size();
    int start = n, end = -1;
	for(int i = 0; i < n; ++i)
		if(s[i] == '1') {
			start = min(start, i);
			end = max(end, i);
		}
	if(end == -1) return false;
	for(int i = start; i <= end; ++i)
		if(s[i] != '1')
			return false;
	return true;
}
int main(){
    int t; cin>>t;
    
    for(int i=1;i<=t;i++){
        bool answer = check();
        cout<<(answer ? "YES":"NO")<<endl;
    }
}