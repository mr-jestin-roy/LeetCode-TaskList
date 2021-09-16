#include <bits/stdc++.h>
using namespace std;

int main() {
 // your code goes here
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     cin>>n;
     int a[n-1];
     for(int i=0;i<n-1;i++) cin>>a[i];
     int temp=*max_element(a,a+n-1);
     long long int ans=((pow(10,5)-temp)+(pow(10,5)-temp+1));
     cout<<ans%1000000007<<endl;
 }
 return 0;
}