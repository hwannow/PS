#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 7 == 0 && i % 11 != 0) cout << "Hurra!\n";
        else if (i % 7 != 0 && i % 11 == 0) cout << "Super!\n";
        else if (i % 7 == 0 && i % 11 == 0) cout << "Wiwat!\n";
        else cout << i << "\n";
    }
}