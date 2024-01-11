#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m, a, b;
int small, big;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    cin >> b >> a;
    small = b - a; big = b + a;
    if (small < n) small = n;
    if (big > m) big = m;
    if (big - small + 1 <= 0) {
        cout << "IMPOSSIBLE";
        return 0;
    }
    cout << big - small + 1;
}