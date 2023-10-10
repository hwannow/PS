#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int board[100001];
int ans = 1, visited[100001];

int range_over(int nx) {
	return nx < 0 || nx >= n;
}

void bfs() {
	m--;
	queue<int> q;
	q.push(m);
	visited[m] = 1;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (int a : {cur + board[cur], cur - board[cur]}) {
			if (range_over(a) || visited[a]) continue;
			ans++;
			q.push(a);
			visited[a] = 1;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> board[i];

	cin >> m;

	bfs();
	cout << ans;

}