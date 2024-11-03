#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int p1 = 0, p2 = 0;
    int maxLead = 0;
    int win = 0;
    
    while(n--) {
        int s1, s2;
        cin >> s1 >> s2;

        p1 += s1;
        p2 += s2;
        
        int lead;
        if(p1 > p2) {
            lead = p1 - p2;
            if(lead > maxLead) {
                maxLead = lead;
                win = 1;
            }
        }else {
            lead = p2 - p1;
            if(lead > maxLead) {
                maxLead = lead;
                win = 2;
            }
        }
    }
    cout<<win<<" "<<maxLead<<endl;
    return 0;
}
