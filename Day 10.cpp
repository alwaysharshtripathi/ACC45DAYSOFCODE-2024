#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, w, x, y, z;
	cin>>t;
	while(t) {
	    cin>>w>>x>>y>>z;
	    if(w == x || w == y || w == z || w == x+y || w == y+z || w == x+z || w == x+y+z)
	        cout<<"Yes"<<endl;
	    else 
	        cout<<"No"<<endl;
	    t--;
	}
    
    return 0;
}
