#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, answer = 0;
int board[501][501];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++)
            cin >> board[i][j];
    }
    answer = board[0][0];
    for (int i = 1; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0) board[i][j] = board[i][j] + board[i - 1][0];
            else if (j == i) board[i][j] = board[i][j] + board[i - 1][j - 1];
            else board[i][j] = max(board[i][j] + board[i - 1][j - 1], board[i][j] + board[i - 1][j]);
            if (answer < board[i][j]) answer = board[i][j];
        }
    }

    cout << answer;
}