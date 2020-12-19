// 3의 배수
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string X;
	cin >> X;
	int cnt = 0;

	while (X.size() != 1) {
		int Y = 0;
		for (int i = 0; i < X.size(); i++) {
			Y += X[i] - 48;
		}
		X = to_string(Y);
		cnt++;
	}

	cout << cnt << endl;
	cout << (stoi(X) % 3 == 0 ? "YES" : "NO");

	return 0;
}