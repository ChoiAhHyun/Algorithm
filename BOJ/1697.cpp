// 숨바꼭질
#include <iostream>
#include <queue>

using namespace std;

int ck[100001], way[3] = { 1, -1, 2 };
int N, K;

void bfs() {
	queue<int> q;
	ck[N] = 1;
	q.push(N);

	while (!q.empty()) {
		int f = q.front();
		q.pop();

		for (int w : way) {
			int next;
			if (w == 2) {
				next = f * w;
			}
			else {
				next = f + w;
			}

			if (next == K) {
				cout << ck[f] << endl;
				return;
			}
			if (0 <= next && next <= 100000 && ck[next] == 0) {
				ck[next] = ck[f] + 1;
				q.push(next);
			}
		}
	}
}

int main() {
	cin >> N >> K;

	if (N == K) {
		cout << 0 << endl;
	}
	else {
		bfs();
	}

	return 0;
}