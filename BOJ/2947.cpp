// 나무 조각
#include <iostream>
#define SIZE 5

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[5];
	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
	}

	int cnt = 0;
	while (cnt < SIZE - 1) {
		for (int i = 0; i < SIZE - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;

				for (int elem : arr) {
					cout << elem << " ";
				}
				cout << endl;
			}

			if (arr[i] == i + 1 && arr[i + 1] == i + 2) {
				cnt++;
			}
		}
	}

	return 0;
}