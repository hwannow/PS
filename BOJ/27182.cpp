#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;

    if (n - 7 > 0) cout << n - 7;
    else cout << m + 7;
}