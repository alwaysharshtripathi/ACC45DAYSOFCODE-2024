#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k; 
        int minionVal[n]; 

        for (int i = 0; i < n; i++) {
            cin >> minionVal[i];
        }
        int count = 0; 

        for (int i = 0; i < n; i++) {
            if ((minionVal[i] + k) % 7 == 0) {
                count++; 
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
