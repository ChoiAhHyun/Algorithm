// 두 수 비교하기
#include <iostream>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B;
	cin >> A >> B;
	if (A > B) {
		cout << ">";
	}
	else if (A < B) {
		cout << "<";
	}
	else {
		cout << "==";
	}

	return 0;
}