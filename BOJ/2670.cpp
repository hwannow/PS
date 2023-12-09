#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n;
double arr[10005], answer = 0.0;
double dp[10005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    dp[0] = arr[0];

    for (int i = 1; i < n; i++) {
        dp[i] = max(dp[i - 1] * arr[i], arr[i]);
        answer = max(answer, dp[i]);
    }

    cout.precision(3);
    cout << fixed;
    cout << answer;
}