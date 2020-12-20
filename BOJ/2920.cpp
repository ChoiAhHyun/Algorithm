// 음계
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n = 8, start;
	string output;
	cin >> start;
	n--;

	if (start == 1) {
		output = "ascending";
	}
	else if (start == 8) {
		output = "descending";
	}
	else {
		output = "mixed";
	}

	while (n--) {
		int input;
		cin >> input;
		if ((output == "ascending" && n != 8 - input) || (output == "descending" && n != input - 1)) {
			output = "mixed";
		}
	}
	cout << output;

	return 0;
}