// 상수
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string A, B;
	cin >> A >> B;

	reverse(A.begin(), A.end());
	reverse(B.begin(), B.end());

	cout << (A > B ? A : B);

	return 0;
}