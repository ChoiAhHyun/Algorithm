// 요세푸스 문제
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	queue<int> q;
	vector<int> vec;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	while (vec.size() != N) {
		for (int i = 1; i < K; i++) {
			q.push(q.front());
			q.pop();
		}
		vec.push_back(q.front());
		q.pop();
	}

	cout << '<';
	for (int i = 0; i < vec.size(); i++) {
		if (i > 0) cout << ',' << ' ';
		cout << vec[i];
	}
	cout << '>';

	return 0;
}