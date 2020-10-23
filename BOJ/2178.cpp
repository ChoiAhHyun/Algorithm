// 미로 탐색
#include <vector>
#include <string>
#include <iostream>
#include <queue>

using namespace std;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };

int main() {
	int N, M;
	cin >> N;
	cin >> M;
	vector<string> map(N);
	for (int i = 0; i < N; i++) {
		string str;
		cin >> str;
		map[i] = str;
	}

	vector<vector<int>> dis(N, vector<int>(M, 0));
	queue<pair<int, int>> q;

	q.push(make_pair(0, 0));
	dis[0][0] = 1;
	while (!q.empty()) {
		pair<int, int> f = q.front();
		q.pop();

		for (int k = 0; k < 4; k++) {
			int x = f.first + dx[k];
			int y = f.second + dy[k];
			if (0 <= x && x < N && 0 <= y && y < M && map[x][y] == '1' && dis[x][y] == 0) {
				q.push(make_pair(x, y));
				dis[x][y] = dis[f.first][f.second] + 1;
			}
		}
	}

	cout << dis[N - 1][M - 1] << endl;

	return 0;
}