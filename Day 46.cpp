#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x, y, r;
        cin>>x>>y>>r;
        
        int extra = r / 30;
        int max = (x + extra + y - 1) / y;
        
        cout<<max<<endl;
    }
    return 0;
}
