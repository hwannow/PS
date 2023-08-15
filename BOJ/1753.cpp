#include<bits/stdc++.h>
#define x first
#define y second
#define MAX 20001        // 최대 정점의 개수 
#define INF 99999999

using namespace std;
vector<pair<int, int>> adj[MAX];

void dijkstra(int start, int V) {
	vector<int> dist(V + 1, INF);
	priority_queue<pair<int, int>> pq;

	dist[start] = 0;
	pq.push({ 0, start });

	while (!pq.empty()) {
		int cost = -pq.top().x;
		int cur = pq.top().y;
		pq.pop();

		for (int i = 0; i < adj[cur].size(); i++) {
			int next = adj[cur][i].x;
			int nCost = cost + adj[cur][i].y;
			if (nCost < dist[next]) {
				dist[next] = nCost;
				pq.push({ -nCost, next });
			}
		}
	}

	for (int i = 1; i < V + 1; i++) {
		if (dist[i] == INF) cout << "INF\n";
		else cout << dist[i] << "\n";
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int V, E, start;
	cin >> V >> E;
	cin >> start;

	for (int i = 0; i < E; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;
		adj[from].push_back({ to, cost });
		//adj[to].push_back(make_pair(from, cost));
	}

	dijkstra(start, V);


	return 0;

}