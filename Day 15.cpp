#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, k, m;
	cin>>t;
	while(t--) {
	    cin>>n>>k>>m;
	    if(n % (k * m)) {
	        cout<<(n / (k * m)) + 1<<endl;
        }else {
            cout<<n / (k * m)<<endl;
        }
	}
    return 0;
}
