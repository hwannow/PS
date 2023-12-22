#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int mmax = 0;

    int a, b, k;
    cin >> a >> b >> k;
    for (int i = 0; i <= k; i++) {
        int n = (a - i) / 2;
        int m = b - (k - i);
        if (mmax < min(n, m))
            mmax = min(n, m);
    }
    cout << mmax;
}