#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, a, b;
int dp[1000001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> a >> b;

    memset(dp, 1000001, sizeof(dp));
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i - a - 1 >= 0) dp[i] = min(dp[i], dp[i - a - 1] + 1);
        if (i - b - 1 >= 0) dp[i] = min(dp[i], dp[i - b - 1] + 1);
    }

    cout << dp[n];
}