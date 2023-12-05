#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, last = 3;
long long dp[1000005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        for (int j = 4; j <= m; j++)
            dp[j] = (dp[j - 1] + dp[j - 2] + dp[j - 3]) % 1000000009;


        cout << dp[m] % 1000000009 << "\n";
    }


}