// 더하기 사이클
#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, cnt = 0, result = -1;
	cin >> N;
	while (result != N) {
		int sum = 0, n;
		if (result == -1) {
			n = N;
		}
		else {
			n = result;
		}
		result = (n % 10) * 10;
		while (n > 0) {
			sum += n % 10;
			n /= 10;
		}
		result += sum % 10;
		cnt++;
	}
	cout << cnt;

	return 0;
}