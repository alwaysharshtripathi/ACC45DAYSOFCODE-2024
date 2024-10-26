#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        int weekDay = n / 7;
        int extraDay = n % 7;
        
        int tuesday = weekDay;
        
        if(extraDay >= 2) {
            tuesday += 1;
        }
        cout<<tuesday<<endl;
    }
    return 0;
}
