// 모의고사
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	vector<vector<int>> v {
		{ 1, 2, 3, 4, 5 },
		{ 2, 1, 2, 3, 2, 4, 2, 5 },
		{ 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 }
	};
	vector<int> n (v.size(), 0);

	for (int i = 0; i < answers.size(); i++) {
		for (int j = 0; j < v.size(); j++) {
			if (answers[i] == v[j][i % v[j].size()]) {
				n[j]++;
			}
		}
	}

	int max_num = *max_element(n.begin(), n.end());
	for (int i = 0; i < n.size(); i++) {
		if (n[i] == max_num) {
			answer.push_back(i + 1);
		}
	}

	return answer;
}

void print_vector(vector<int> v) {
	for (int n : v) {
		cout << n << " ";
	}
	cout << endl;
}

int main(void) {
	print_vector(solution({ 1, 2, 3, 4, 5 })); // 1
	print_vector(solution({ 1, 3, 2, 4, 2 })); // 1 2 3
	return 0;
}