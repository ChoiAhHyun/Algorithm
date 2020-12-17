// 세로읽기
#include <iostream>
#include <string>

using namespace std;

char arr[5][15];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 5; i++) {
		string str;
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			arr[i][j] = str[j];
		}
	}

	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 5; i++) {
			if (arr[i][j] != NULL) {
				cout << arr[i][j];
			}
		}
	}

	return 0;
}