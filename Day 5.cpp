#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, b1, b2, b3;
	cin>>t;
	for(int i = 0; i < t; i++) {
	    cin>>b1>>b2>>b3;
	    if((b1 == 0 && b2 == 0) || (b2 == 0 && b3 == 0) ||  (b1 == 0 && b3 == 0)) {
	        cout<<"Water filling time"<<endl;
	    }else 
	        cout<<"Not now"<<endl;
	}
	
	return 0;
}
