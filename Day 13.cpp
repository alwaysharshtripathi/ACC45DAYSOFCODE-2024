#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin>>t;
	while(t--) {
	    cin>>x>>y;
	    if(y >= x * 0.5) {
	        cout<<"Yes"<<endl;
	    }else {
	        cout<<"No"<<endl;
	    }
	}
    return 0;
}
