#include<bits/stdc++.h>

using namespace std;



int main(){
    int t;
    cin>>t;
    while(t--){
        int n ;
         cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int minInd=0,maxInd=0;
        for(int i=0;i<n;i++){
            if(a[0]<b[0])
                break;
            else{
                maxInd = i;
                if(a[0] < b[i]){
                    maxInd = i;
                    break;
            }
            }

        }
        int sum = maxInd - minInd;

        cout <<sum<<endl;         

    }
}