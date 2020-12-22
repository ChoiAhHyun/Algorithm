// 팰린드롬수
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	while (true) {
		int input;
		cin >> input;
		if (!input) break;

		string str = to_string(input), output = "yes";
		for (int i = 0; i < str.size(); i++) {
			if (str[i] != str[str.size() - (i + 1)]) {
				output = "no";
				break;
			}
		}
		cout << output << endl;
	}

	return 0;
}