#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, m, t;
int board[1001][1001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> t;
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        board[(a + b) % 2][b % 2] = 1;
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (!board[i][j]) {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}