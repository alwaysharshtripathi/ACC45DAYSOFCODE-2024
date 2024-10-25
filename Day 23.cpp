#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int start38 = 0;
        int ltime108 = 0;
        
        for(int i = 0; i < n; i++) {
            string code;
            cin >> code;
            
            if(code == "START38") {
                ++start38;
            } else if(code == "LTIME108") {
                ++ltime108;
            }
        }
        
        cout << start38 << " " << ltime108 << endl;
    }
    
    return 0;
}
