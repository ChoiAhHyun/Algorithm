// 그룹 단어 체커
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int cnt = 0;
	while (N--) {
		string w;
		cin >> w;

		bool ck[26] = { false, };
		int i, prev = w[0] - 97;
		ck[prev] = true;
		for (i = 1; i < w.size(); i++) {
			int cur = w[i] - 97;

			if (prev == cur) {
				continue;
			}
			if (ck[cur]) {
				break;
			}

			ck[cur] = true;
			prev = cur;
		}

		if (i == w.size()) {
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}