#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin >> n;

        int coinsNeeded = (n / 5 * 4) + n % 5;
        cout<<coinsNeeded<<endl;
    }
    return 0;
}
