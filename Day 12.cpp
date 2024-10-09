#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, x;
	cin>>t;
	while(t) {
	    cin>>n>>x;
	    if(x < (n - x)) {
	        cout<<x<<endl;
	    }else {
	        cout<<n - x<<endl;
	    }
	    t--;
	}
    return 0;
}
