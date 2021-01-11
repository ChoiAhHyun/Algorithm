// 최댓값
#include <iostream>
#include <queue>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priority_queue<pair<int, int>> pq;
	for (int i = 1; i <= 9; i++) {
		int n;
		cin >> n;
		pq.push(make_pair(n, i));
	}
	cout << pq.top().first << '\n' << pq.top().second;

	return 0;
}