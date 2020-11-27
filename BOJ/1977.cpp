// 완전제곱수
#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int M, N;
	cin >> M >> N;

	int sum = 0, min = N;
	for (int i = M; i <= N; i++) {
		double x = sqrt(i);
		if (x == (int)x) {
			sum += i;
			if (min == N) min = i;
		}
	}

	if (sum > 0) {
		cout << sum << endl << min;
	}
	else {
		cout << -1;
	}

	return 0;
}