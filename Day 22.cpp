#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, t, n, arr[1000], max, j;
    cin >> t;
    for (i = 0; i < t; i++) 
    {
        max = 0;
        cin >> n;
        for (j = 0; j < n; j++) 
        {
            cin >> arr[j];
        }
        for (j = 0; j < n; j++) 
        {
            if (arr[j] != 0)
                max = j;
        }
        cout << max << endl;
    }
    return 0;
}
