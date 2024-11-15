#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, a, b;
        cin>>n>>a>>b;

        int totalDuration = ((n + 1) / 2 * b) + (n / 2 * a);
        cout<<totalDuration<<endl;
    }
    return 0;
}
