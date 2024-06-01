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
        int a, b, c, d;

        cin >> a >> b;
        if (b < a) {
            int tmp = a;
            a = b;
            b = tmp;
        }
        c = b;

        while (1) {
            if (c % a == 0) break;
            c += b;
        }

        for (int i = a; i >= 1; i--) {
            if (a % i == 0 && b % i == 0) {
                d = i; break;
            }
        }

        cout << c << " " << d << "\n";
    }
}