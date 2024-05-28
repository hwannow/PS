#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        cin >> n;
        if (!n) break;
        cin >> m;
        for (int i = 1; i < n / 2; i += 2) {
            if (m == i) {
                cout << i + 1 << " " << n - i << " " << n - i + 1 << "\n";
                break;
            }
            else if (m == i + 1) {
                cout << i << " " << n - i << " " << n - i + 1 << "\n";
                break;
            }
            else if (m == n - i) {
                cout << i << " " << i + 1 << " " << n - i + 1 << "\n";
                break;
            }
            else if (m == n - i + 1) {
                cout << i << " " << i + 1 << " " << n - i << "\n";
                break;
            }
        }
    }
}