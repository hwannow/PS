#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    if (n == 1) cout << 1;
    else if (n == 2) cout << min(4, (m + 1) / 2);
    else if (m < 7) cout << min(4, m);
    else cout << m - 2;
}