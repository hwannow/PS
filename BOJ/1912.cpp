#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, answer = 0;
int arr[100001];
int dp[100001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    dp[0] = arr[0]; answer = arr[0];

    for (int i = 1; i < n; i++) {
        dp[i] = max(arr[i], dp[i - 1] + arr[i]);
        answer = max(dp[i], answer);
    }

    cout << answer;
}