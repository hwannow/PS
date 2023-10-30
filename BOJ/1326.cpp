#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n;
int board[10002];
int a, b;
int visited[10002];

int bfs() {
	queue<int> q;
	q.push(a);
	visited[a] = 1;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();

		for (int i = cur + board[cur]; i < n; i += board[cur]) {
			if (visited[i]) continue;
			if (i == b) return visited[cur];
			visited[i] = visited[cur] + 1;
			q.push(i);
		}
		for (int i = cur - board[cur]; i >= 0; i -= board[cur]) {
			if (visited[i]) continue;
			if (i == b) return visited[cur];
			visited[i] = visited[cur] + 1;
			q.push(i);
		}
	}
	return -1;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> board[i];

	cin >> a >> b;
	a--; b--;

	cout << bfs();
}