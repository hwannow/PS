#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> vec[5001];
long long board[5001][5001];
long long ans = 0;
int visited[5001];

void dfs(int start, long long sum) {
    if (sum > ans) {
        ans = sum;
    }
    visited[start] = 1;
    for (int i = 0; i < vec[start].size(); i++) {
        int y = vec[start][i];

        if (visited[y] == 0) {
            visited[y] = 1;
            dfs(y, sum + board[start][y]);
            visited[y] = 0;
        }
    }

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        vec[a].push_back(b);
        vec[b].push_back(a);
        board[a][b] = c;
        board[b][a] = c;
    }
    dfs(1, 0);
    cout << ans;

}