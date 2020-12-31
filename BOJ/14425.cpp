// 문자열 집합
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, count = 0;
	cin >> N >> M;
	unordered_set<string> set;
	while (N--) {
		string input;
		cin >> input;
		set.insert(input);
	}
	while (M--) {
		string input;
		cin >> input;
		if (set.find(input) != set.end()) {
			count++;
		}
	}
	cout << count;

	return 0;
}