#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, m;
long long dp[100005][5];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    dp[1][1] = 1;
    dp[2][2] = 1;
    dp[3][1] = 1, dp[3][2] = 1, dp[3][3] = 1;

    cin >> n;
    while (n--) {
        cin >> m;

        for (int i = 4; i <= m; i++) {
            dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1000000009;
            dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1000000009;
            dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % 1000000009;
        }
        cout << (dp[m][1] + dp[m][2] + dp[m][3]) % 1000000009 << "\n";
    }
}