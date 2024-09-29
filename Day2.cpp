#include <bits/stdc++.h>
using namespace std;

int main() {
	 int t;
	 cin>>t;
	 int n,c,x;
	 int y = 0, z = 0;
	 for(int i=1;i<=t;i++)
	 {
	     cin>>n>>x;
	     z = n % 6;
	     y = n / 6;
	     if(z == 0)
            c = y * x;
	     else
            c = (y+1) * x;
	     cout<<c<<endl;
	}

}
