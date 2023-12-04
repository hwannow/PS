#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, m;
int board[1005][1005];
int dp[1005][1005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++)
            cin >> board[i][j];
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int MAX = max(dp[i - 1][j], dp[i][j - 1]);
            dp[i][j] = max(MAX, dp[i - 1][j - 1]) + board[i][j];
        }
    }

    cout << dp[n][m];
}