#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, a, b, c, d, x;
	cin>>t;
	while(t--) {
	    cin>>a>>b>>c>>d;
	    x = max({a + c, a + d, b + c, b + d});
	    cout<<x<<endl;
	}
    return 0;
}
