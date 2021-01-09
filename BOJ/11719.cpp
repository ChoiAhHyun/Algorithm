// 그대로 출력하기 2
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	while (getline(cin, input)) {
		cout << input << '\n';
	}

	return 0;
}