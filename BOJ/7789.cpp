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

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) cnt++;
    }
    if (cnt == 2) {
        n = m * 1000000 + n;
        cnt = 0;
        for (int j = 1; j <= n; j++) {
            if (n % j == 0) cnt++;
        }

        if (cnt == 2) cout << "Yes";
        else cout << "No";
    }
    else cout << "No";
}