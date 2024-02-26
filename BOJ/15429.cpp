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
    while (n--) {
        int a, b = -1, c;
        cin >> a >> b;
        for (int i = 2; i <= a; i++) {
            cin >> c;
            if (b + 1 != c) cout << i << "\n";
            else b = c;
        }
    }
}