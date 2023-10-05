#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int n, m;
int visited[200002];
int parent[200002];
vector<int> v;

void bfs() {
	queue<int> q;
	q.push(n);
	visited[n] = 1;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		for (auto a : { cur + 1, cur - 1, cur * 2 }) {
			if (a < 0 || a > 200005) continue;
			if (visited[a]) continue;

			visited[a] = visited[cur] + 1;
			parent[a] = cur;

			if (a == m) {
				int idx = a;
				for (int i = 0; i < visited[a]; i++) {
					v.push_back(idx);
					idx = parent[idx];
				}
				return;
			}
			q.push(a);
		}
	}
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;

	if (n == m) {
		cout << 0 << "\n" << n;
		return 0;
	}
	if (m < n) {
		cout << n - m << "\n";
		for (int i = n; i >= m; i--)
			cout << i << " ";
		return 0;
	}

	bfs();
	cout << visited[m] - 1 << "\n";

	for (int i = v.size() - 1; i >= 0; i--)
		cout << v[i] << " ";

}