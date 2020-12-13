// 숫자 빈도수
#include <iostream>

using namespace std;

int digit[10];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, d;
	cin >> n >> d;

	for (int i = 1; i <= n; i++) {
		int j = i;
		while (j > 0) {
			digit[j % 10]++;
			j /= 10;
		}
	}

	cout << digit[d];

	return 0;
}