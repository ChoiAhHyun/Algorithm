// 단어 공부
#include <iostream>
#include <string>

using namespace std;

int alphabet[100];

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	cin >> input;
	char output = NULL;
	int max = 0;
	for (int i = 0; i < input.size(); i++) {
		char cur;
		if (input[i] > 90) {
			cur = input[i] - 32;
		}
		else {
			cur = input[i];
		}

		alphabet[cur]++;
		if (alphabet[cur] > max) {
			output = cur;
			max = alphabet[cur];
		}
		else if (alphabet[cur] == max) {
			output = '?';
		}
	}
	cout << output;

	return 0;
}