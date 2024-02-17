#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
char a;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        cin >> n >> a >> m;

        if (!n && !m) break;
        if (a == 'W') {
            if (n - m < -200) cout << "Not allowed\n";
            else cout << n - m << "\n";
        }
        else {
            cout << n + m << "\n";
        }
    }
}