// OX퀴즈
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	while (N--) {
		string input;
		cin >> input;
		int sum = 0, series = 0;
		for (int i = 0; i < input.size(); i++) {
			if (input[i] == 'O') {
				++series;
				sum += series;
			}
			else {
				series = 0;
			}
		}
		cout << sum << '\n';
	}

	return 0;
}