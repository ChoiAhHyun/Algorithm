// 뒤집힌 덧셈
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int rev(int n) {
	string str = to_string(n);
	reverse(str.begin(), str.end());
	return stoi(str);
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int X, Y;
	cin >> X >> Y;

	cout << rev(rev(X) + rev(Y));

	return 0;
}