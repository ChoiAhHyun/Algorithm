// 배부른 마라토너
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	unordered_map<string, int> m;
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		m[input]++;
	}
	for (int i = 0; i < N - 1; i++) {
		string input;
		cin >> input;
		m[input]--;
	}

	for (auto elem : m) {
		if (elem.second == 1) {
			cout << elem.first;
			break;
		}
	}

	return 0;
}