#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, answer = 0;
int dp[105][10];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 1; i <= 9; i++)
        dp[1][i] = 1;

    for (int i = 2; i <= n; i++) {
        for (int j = 0; j <= 9; j++) {
            if (j == 0)
                dp[i][j] = dp[i - 1][j + 1];
            else if (j == 9)
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
            dp[i][j] %= 1000000000;
        }
    }
    for (int i = 0; i <= 9; i++)
        answer = (answer + dp[n][i]) % 1000000000;

    cout << answer;
}