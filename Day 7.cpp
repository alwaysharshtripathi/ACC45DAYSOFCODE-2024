#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x;
    cin>>t;
    while(t) {
        cin>>x;
        if(x+3 <= 10) 
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
        
        t--;
    }
    
    return 0;
}
