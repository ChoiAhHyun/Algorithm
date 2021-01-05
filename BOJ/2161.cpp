// 카드1
#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	queue<int> q;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}

	int i = 1;
	while (q.size() != 1) {
		if (i % 2) {
			cout << q.front() << ' ';
			q.pop();
		}
		else {
			q.push(q.front());
			q.pop();
		}
		i++;
	}
	cout << q.front();

	return 0;
}