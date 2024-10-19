#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin>>t;
	while(t--) {
	    cin>>x>>y;
	    if(x == y) {
	        cout<<"Same"<<endl;
	    }else if(x<y) {
	        cout<<"Bike"<<endl;
	    }else {
	        cout<<"Car"<<endl;
	    }
	}
	return 0;
}
