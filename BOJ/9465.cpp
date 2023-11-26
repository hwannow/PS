#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n;
int arr[2][100001], m, dp[2][100001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    while (n--) {
        cin >> m;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];
        }
        dp[0][0] = arr[0][0], dp[1][0] = arr[1][0];
        for (int i = 1; i < m; i++) {
            dp[0][i] = max(dp[0][i - 1], dp[1][i - 1] + arr[0][i]);
            dp[1][i] = max(dp[1][i - 1], dp[0][i - 1] + arr[1][i]);
        }

        cout << max(dp[0][m - 1], dp[1][m - 1]) << "\n";
    }
}