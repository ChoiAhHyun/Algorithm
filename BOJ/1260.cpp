// DFS와 BFS
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

#define MAX_VALUE 1001

int N, M, V;
int edge[MAX_VALUE][MAX_VALUE];
int visit[MAX_VALUE];

void dfs(int n) {
	cout << n << " ";
	visit[n] = 1;

	for (int i = 1; i <= N; i++) {
		if (edge[n][i] && !visit[i]) {
			dfs(i);
		}
	}
}

void bfs(int n) {
	queue<int> q;
	q.push(n);
	visit[n] = 1;

	while (!q.empty()) {
		int peek = q.front();
		cout << peek << " ";
		q.pop();

		for (int i = 1; i <= N; i++) {
			if (edge[peek][i] && !visit[i]) {
				q.push(i);
				visit[i] = 1;
			}
		}
	}
}

int main() {
	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		edge[x][y] = edge[y][x] = 1;
	}

	dfs(V);
	cout << endl;
	fill_n(visit, MAX_VALUE, 0);
	bfs(V);

	return 0;
}