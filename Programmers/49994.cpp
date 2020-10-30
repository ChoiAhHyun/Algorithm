// 방문 길이
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };

int toIdx(char d) {
	switch (d) {
	case 'U': return 0;
	case 'D': return 1;
	case 'R': return 2;
	case 'L': return 3;
	}
}

int solution(string dirs) {
	vector<pair<pair<int, int>, pair<int, int>>> paths;
	pair<int, int> cur = make_pair(0, 0);

	for (int i = 0; i < dirs.size(); i++) {
		int idx = toIdx(dirs[i]);
		int new_x = cur.first + dx[idx];
		int new_y = cur.second + dy[idx];

		if (-5 <= new_x && new_x <= 5 && -5 <= new_y && new_y <= 5) {
			pair<int, int> past = cur;
			cur = make_pair(new_x, new_y);

			if (find(paths.begin(), paths.end(), make_pair(cur, past)) == paths.end()
				&& find(paths.begin(), paths.end(), make_pair(past, cur)) == paths.end()) {
				paths.push_back(make_pair(cur, past));
			}
		}
	}

	return paths.size();
}