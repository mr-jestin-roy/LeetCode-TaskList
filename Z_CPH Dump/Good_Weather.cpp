#include <iostream>
using namespace std;

int main() {
	int t;
	 cin>>t;
	 while(t--){
	     int a[7];
	     int sum =0;
	     for(int i=0;i<7;i++){
	         cin>>a[i];
	         sum += a[i];
	     }
	     if(sum > (7-sum))
	        cout<<"YES"<<endl;
	   else
	    cout<<"NO"<<endl;
	 }
	return 0;
}
