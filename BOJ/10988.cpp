// 팰린드롬인지 확인하기
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string word;
	cin >> word;

	int cur = word.size() / 2;
	while (cur >= 0) {
		if (word[cur] != word[word.size() - cur - 1]) {
			cout << 0;
			exit(0);
		}
		cur--;
	}

	cout << "1";
	return 0;
}