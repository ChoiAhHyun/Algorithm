#include <string>
#include <algorithm>

using namespace std;

int solution1(int N) {
	string str = "";

	while (N != 0) {
		str += to_string(N % 2);
		N /= 2;
	}

	int idx = -1, longest = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '1') {
			if (idx > -1) {
				int l = i - idx - 1;
				if (l > longest) {
					longest = l;
				}
				idx = i;
			}
			else {
				idx = i;
			}
		}
	}

	return longest;
}

int solution2(int N) {
	int cnt = 0, longest = 0;
	bool is_one = false;

	while (N != 0) {
		int r = N % 2;

		if (r == 1) {
			is_one = true;
			longest = max(longest, cnt);
			cnt = 0;
		}

		if (r == 0 && is_one) cnt++;

		N /= 2;
	}

	return longest;
}