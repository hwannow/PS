#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int t, n;
long long dp[105] = { 0,1,1,1,2,2 };

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        for (int j = 6; j <= n; j++)
            dp[j] = dp[j - 5] + dp[j - 1];

        cout << dp[n] << "\n";
    }
}