#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(vector<int> numbers) {
	sort(numbers.begin(), numbers.end(), greater<>());
	long long result = 0;

	do {
		string str = "";
		for (int n : numbers) {
			str += to_string(n);
		}

		result = max(result, stoll(str));
	} while (prev_permutation(numbers.begin(), numbers.end()));

	return to_string(result);
}

int main() {
	cout << solution({ 3, 30, 34, 5, 191, 432789 }) << endl; // 543278934330191

	return 0;
}