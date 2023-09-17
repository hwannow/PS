#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;

int visited[1001][1001];
int a, b, c;
int sum = 0;

int bfs() {
	queue<pair<int, int >> q;
	q.push({ a, b });
	visited[a][b] = 1;

	while (!q.empty()) {
		auto cur = q.front(); q.pop();
		vector<int> v;
		v.push_back(cur.x); v.push_back(cur.y); v.push_back(sum - cur.x - cur.y);

		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (v[i] < v[j]) {
					int one = v[i] * 2;
					int two = v[j] - v[i];
					if (visited[one][two]) continue;
					visited[one][two] = 1;
					q.push({ one, two });
				}
			}
		}
	}
	return visited[sum / 3][sum / 3];
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	cin >> a >> b >> c;
	sum = a + b + c;
	if (sum % 3 != 0) {
		cout << "0";
		return 0;
	}

	cout << bfs();

}