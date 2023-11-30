#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, answer;
int arr[1001], dp[1001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        int ck = 0;
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j] && ck < dp[j]) ck = dp[j];
        }
        dp[i] = ck + 1;
        if (dp[i] > answer) answer = dp[i];
    }

    cout << answer;
}