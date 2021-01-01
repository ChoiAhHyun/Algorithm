// 차집합
#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main1(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, cnt = 0;
	cin >> A >> B;
	unordered_map<int, int> map;
	vector<int> vec;
	while (A--) {
		int input;
		cin >> input;
		map[input]++;
	}
	while (B--) {
		int input;
		cin >> input;
		map[input]--;
	}

	for (auto elem : map) {
		if (elem.second == 1) {
			cnt++;
			vec.push_back(elem.first);
		}
	}
	cout << cnt << '\n';
	sort(vec.begin(), vec.end());
	for (auto elem : vec) {
		cout << elem << ' ';
	}

	return 0;
}

int main2(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, cnt = 0;
	cin >> A >> B;
	set<int> s;
	while (A--) {
		int input;
		cin >> input;
		s.insert(input);
	}
	while (B--) {
		int input;
		cin >> input;
		if (s.find(input) != s.end()) {
			s.erase(input);
		}
	}

	cout << s.size() << '\n';
	for (int elem : s) {
		cout << elem << ' ';
	}

	return 0;
}