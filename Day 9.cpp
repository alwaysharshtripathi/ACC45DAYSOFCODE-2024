#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, x, y;
	cin>>t;
	while(t) {
	    cin>>x>>y;
	    if(x >= y)
	        cout<<"0"<<endl;
	    else
	        cout<<(y-1)/ x<<endl;
	    t--;
	}
	
	return 0;
}
