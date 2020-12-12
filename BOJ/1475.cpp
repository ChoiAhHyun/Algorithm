// 방 번호
#include <iostream>
#include <algorithm>

using namespace std;

int digit[9];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	if (!N) {
		cout << 1;
		exit(0);
	}

	int arr[2] = { 0, 0 };
	while (N > 0) {
		int r = N % 10;
		if (r == 6 || r == 9) {
			r = 6;
			digit[r]++;
			arr[1] = max(arr[1], digit[r]);
		}
		else {
			digit[r]++;
			arr[0] = max(arr[0], digit[r]);
		}

		N /= 10;
	}

	int ceil = arr[1] % 2 ? arr[1] / 2 + 1 : arr[1] / 2;
	cout << max(arr[0], ceil);

	return 0;
}