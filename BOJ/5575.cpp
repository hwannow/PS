#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 3; i++) {
        int a, b, c;
        int n, m, o;
        cin >> a >> b >> c >> n >> m >> o;
        n -= a; m -= b; o -= c;
        if (o < 0) {
            o += 60; m--;
        }
        if (m < 0) {
            m += 60; n--;
        }

        cout << n << " " << m << " " << o << "\n";
    }
}