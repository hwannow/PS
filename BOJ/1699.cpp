#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

#define MAX 100001
int n;
int dp[MAX];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i <= n; i++) dp[i] = i;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j * j <= i; j++)
            dp[i] = min(dp[i], dp[i - j * j] + 1);
    }

    cout << dp[n];
}