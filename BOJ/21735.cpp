#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, m;
int board[101];

int func(int cnt, int res, int cur) {
    if (cnt > m) return 0;
    if (cnt == m || cur == n)
        return res;
    return max(func(cnt + 1, res + board[cur + 1], cur + 1), func(cnt + 1, res / 2 + board[cur + 2], cur + 2));

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> board[i];

    cout << func(0, 1, 0);
}