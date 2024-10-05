#include <bits/stdc++.h>
using namespace std;

int main() {
	int p, q, r, s, t;
	cin>>t;
	while(t) {
	    cin>>p>>q>>r>>s;
	    if(p > (q + r + s)|| q > (r + s + p) || r > (s + p + q) || s > (p + q + r))
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    t--;
	}
	
	return 0;
}
