#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, sum = 0;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 4; i++) {
        int a; cin >> a;
        sum += a;
    }
    cin >> n;
    n = n * 4 - sum;
    if (n >= 0) cout << n;
    else cout << 0;
}