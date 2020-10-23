// 단지번호붙이기
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int N;
string map[25];

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
bool ck[25][25];
vector<int> v;
int cnt;

void dfs(int i, int j) {
	ck[i][j] = true;
	cnt++;

	for (int k = 0; k < 4; k++) {
		int x = i + dx[k];
		int y = j + dy[k];
		if (0 <= x && x < N && 0 <= y && y < N && map[x][y] == '1' && !ck[x][y]) {
			dfs(x, y);
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> map[i];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (map[i][j] == '1' && !ck[i][j]) {
				cnt = 0;
				dfs(i, j);
				v.push_back(cnt);
			}
		}
	}

	cout << v.size() << endl;
	sort(v.begin(), v.end());
	for (int e : v) {
		cout << e << endl;
	}

	return 0;
}