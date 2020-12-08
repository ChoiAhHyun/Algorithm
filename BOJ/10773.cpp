// 제로
#include <iostream>
#include <stack>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K, sum = 0;
	stack<int> stack;
	cin >> K;
	while (K--) {
		int input;
		cin >> input;

		if (!input) {
			sum -= stack.top();
			stack.pop();
		}
		else {
			stack.push(input);
			sum += input;
		}
	}
	cout << sum;

	return 0;
}