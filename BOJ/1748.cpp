// 수 이어 쓰기 1
#include <iostream>

using namespace std;

int digit(int n) {
	int cnt = 0;
	while (n > 0) {
		n /= 10;
		cnt++;
	}
	return cnt;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, sum = 0;
	cin >> N;
	for (int n = 1; n <= N; n++) {
		sum += digit(n);
	}
	cout << sum;

	return 0;
}