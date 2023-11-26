#include<bits/stdc++.h>
#define x first
#define y second
#define INF 1e9
using namespace std;

int n, answer = 0;
int board[1001];
int len[1001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> board[i];

    for (int i = 0; i < n; i++) {
        int ck = 0;
        for (int j = 0; j < i; j++) {
            if (board[i] > board[j] && ck < len[j]) ck = len[j];
        }
        len[i] = ck + 1;
        if (len[i] > answer) answer = len[i];
    }

    cout << answer;
}