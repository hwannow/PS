#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n;
int arr[25], arr2[25];
int dp[21][111];
int MAX = -INF;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> arr[i];
    for (int i = 1; i <= n; i++)
        cin >> arr2[i];

    for (int i = 1; i <= n; i++) {
        for (int j = 100; j >= 0; j--) {
            if (j - arr[i] >= 1) dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - arr[i]] + arr2[i]);
            else dp[i][j] = dp[i - 1][j];
            MAX = max(MAX, dp[i][j]);
        }
    }
    cout << MAX;
}