#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, x, y;
    cin>>t;
    while(t) {
        cin>>x>>y;
        
        a=((500-(x*2))+(1000-((x+y)*4)));
        b=((1000-(y*4))+(500-((x+y)*2)));
        
        if(b>a){
            printf("%d\n", b);
        }else{
            printf("%d\n", a);
        }
        t--;
    }
    
    return 0;
}
