// 개미
#include <iostream>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		int l, n;
		cin >> l >> n;
		int fast = 0, slow = 0;
		while (n--) {
			int p, p_min, p_max;
			cin >> p;
			p_min = min(p, l - p);
			p_max = max(p, l - p);
			fast = max(p_min, fast);
			slow = max(p_max, slow);
		}
		cout << fast << " " << slow << endl;
	}

	return 0;
}