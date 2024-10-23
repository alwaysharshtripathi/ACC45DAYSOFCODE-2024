#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int H, X, Y;
        cin >> H >> X >> Y;

        int attacksWithSpecial = 0;
        if (H > Y) {
            attacksWithSpecial = 1 + (H - Y + X - 1) / X; // 1 for special attack
        } else {
            attacksWithSpecial = 1; // Special attack alone is enough
        }

        int attacksWithoutSpecial = (H + X - 1) / X;

        cout << min(attacksWithSpecial, attacksWithoutSpecial) << endl;
    }

    return 0;
}
