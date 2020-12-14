// 수 정렬하기
#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + N);
	for (int i = 0; i < N; i++) {
		cout << arr[i] << endl;
	}

	return 0;
}