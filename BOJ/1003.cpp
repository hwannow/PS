#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n;
pair<int, int> dp[41];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    dp[0] = { 1, 0 };
    dp[1] = { 0, 1 };

    int remember = 1;
    cin >> n;
    while (n--) {
        int m;
        cin >> m;
        if (remember < m) {
            for (int i = remember + 1; i <= m; i++)
                dp[i] = { dp[i - 1].x + dp[i - 2].x, dp[i - 1].y + dp[i - 2].y };
            remember = m;
        }

        cout << dp[m].x << " " << dp[m].y << "\n";
    }
}