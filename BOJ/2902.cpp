// KMP는 왜 KMP일까?
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input, output = "";
	cin >> input;
	output += input[0];
	for (int i = 1; i < input.size(); i++) {
		if (input[i] == '-') {
			output += input[i + 1];
		}
	}
	cout << output;

	return 0;
}