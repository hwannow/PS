#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int dp[1001] = { 0, 1, 3 };
int m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> m;

    for (int i = 3; i <= m; i++)
        dp[i] = (dp[i - 2] * 2 + dp[i - 1]) % 10007;

    cout << dp[m];
}