// 가장 큰 수
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(const string& a, const string& b) {
	if (a + b > b + a) {
		return true;
	}
	else {
		return false;
	}
}

string solution(vector<int> numbers) {
	vector<string> strings(numbers.size());
	for (int i = 0; i < numbers.size(); i++) {
		strings[i] = to_string(numbers[i]);
	}

	sort(strings.begin(), strings.end(), compare);

	string str = "";
	for (string s : strings) {
		str += s;
	}
	
	if (str[0] == '0') {
		return "0";
	}
	else {
		return str;
	}
}

int main() {
	cout << solution({ 3, 30, 34, 5, 191, 432789 }) << endl; // 543278934330191

	return 0;
}