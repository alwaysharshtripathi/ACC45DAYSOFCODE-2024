#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int count1 = 0, countminus1 = 0;
        
        for(int i = 0; i < n; i++) {
            int element;
            cin >> element;
            if (element == 1) count1++;
            else countminus1++;
        }
        
        if(n % 2 != 0) {
            cout << -1 << endl;
            continue;
        }
        
        if(count1 == countminus1) {
            cout << 0 << endl;
        } else {
            int diff = abs(count1 - countminus1) / 2;
            cout << diff << endl;
        }
    }
    
    return 0;
}
