#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    while (1) {
        cin >> n;
        if (!n) break;
        cout << n;
        while (n >= 10) {
            int tmp = 1;
            while (n > 0) {
                tmp *= n % 10;
                n /= 10;
            }
            cout << " " << tmp;
            n = tmp;
        }
        cout << "\n";
    }
}