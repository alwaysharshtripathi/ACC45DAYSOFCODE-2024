#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n, x, p;
        cin>>n>>x>>p;
        if(p <= (x*3)-(n-x)) {
            cout<<"Pass"<<endl;
        }else {
            cout<<"Fail"<<endl;
        }
    }
    return 0;
}
