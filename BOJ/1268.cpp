// 임시 반장 정하기
#include <iostream>
#include <vector>
#define GRADE 5

using namespace std;

bool ck[1000][1000];

int main(void) {
	int n;
	cin >> n;
	vector<vector<int>> v(n, vector<int>(GRADE, 0));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < GRADE; j++) {
			cin >> v[i][j];
		}
	}

	for (int k = 0; k < GRADE; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (v[i][k] == v[j][k]) {
					ck[i][j] = true;
					ck[j][i] = true;
				}
			}
		}
	}

	int p = 0, max = 0;
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (ck[i][j]) cnt++;
		}

		if (cnt > max) {
			p = i + 1;
			max = cnt;
		}
	}

	cout << p << endl;

	return 0;
}