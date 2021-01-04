// 회사에 있는 사람
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	map<string, int, greater<>> m;

	while (N--) {
		string str1, str2;
		cin >> str1 >> str2;
		if (str2 == "enter") {
			m[str1]++;
		}
		else {
			m[str1]--;
		}
	}

	for (auto elem : m) {
		if (elem.second) {
			cout << elem.first << '\n';
		}
	}

	return 0;
}