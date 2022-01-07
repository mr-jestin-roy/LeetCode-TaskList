#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if(x==0 && y%2!=0)
            {
                cout<<"NO"<<endl;
                continue;
            }
        else if((x+2*y)%2==0 || (x==0 && y%2==0)){
                cout<<"YES"<<endl;
                continue;
        }
        else
	        cout<<"NO"<<endl;
	}
	return 0;
}
