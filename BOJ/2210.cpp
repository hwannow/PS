#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int board[5][5];
int visited[1000000];
int ans = 0;
int dx[4] = { 1, -1, 0, 0 }, dy[4] = { 0, 0, 1, -1 };

int range_over(int i, int j) {
    return i < 0 || j < 0 || i >= 5 || j >= 5;
}

void dfs(int i, int j, int result, int cnt) {
    if (cnt == 5) {
        if (visited[result]) return;
        visited[result] = 1;
        ans++; return;
    }

    for (int dir = 0; dir < 4; dir++) {
        int nx = i + dx[dir], ny = j + dy[dir];
        if (range_over(nx, ny)) continue;

        int results = result * 10 + board[nx][ny];
        dfs(nx, ny, results, cnt + 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++)
            cin >> board[i][j];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            dfs(i, j, board[i][j], 0);
        }
    }

    cout << ans;
}