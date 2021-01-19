// ROT13
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	getline(cin, input);
	for (int i = 0; i < input.size(); i++) {
		if (input[i] >= 97) {
			input[i] = (input[i] + 13 > 122) ? input[i] - 13 : input[i] + 13;
		}
		else if (input[i] >= 65) {
			input[i] = (input[i] + 13 > 90) ? input[i] - 13 : input[i] + 13;
		}
	}
	cout << input;

	return 0;
}