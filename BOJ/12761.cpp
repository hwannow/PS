#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int a, b, n, m;
int visited[100001];

int range_over(int x) {
	return x < 0 || x > 100000;
}


int bfs() {
	queue<pair<int, int>> q;
	q.push({ n, 0 });

	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		int loc = cur.x, time = cur.y;
		if (loc == m) return time;

		for (auto x : { loc + 1, loc - 1, loc + a, loc - a, loc + b, loc - b, loc * a, loc * b }) {

			if (!range_over(x) && !visited[x]) {
				q.push({ x, time + 1 });
				visited[x] = 1;
			}
		}

	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> a >> b >> n >> m;

	cout << bfs();

}