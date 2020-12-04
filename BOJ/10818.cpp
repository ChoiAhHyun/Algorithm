// 최소, 최대
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, min_num, max_num;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;

		if (i == 0) {
			min_num = num;
			max_num = num;
			continue;
		}

		min_num = min(num, min_num);
		max_num = max(num, max_num);
	}

	cout << min_num << " " << max_num;

	return 0;
}