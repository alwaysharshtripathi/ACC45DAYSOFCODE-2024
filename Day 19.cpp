#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, x, y;
    cin>>t;
    while(t--) {
    cin >> n >> x >> y;
        
        if (y <= n * x && y % x == 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
