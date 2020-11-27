// 결혼식
#include <iostream>
#include <vector>
#include <queue>
#define MAX 501

using namespace std;

vector<int> friends[MAX];
int ck[MAX];

int main(void) {
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		friends[a].push_back(b);
		friends[b].push_back(a);
	}

	queue<int> q;

	q.push(1);
	ck[1] = 1;
	while (!q.empty()) {
		int node = q.front();
		q.pop();

		for (int i = 0; i < friends[node].size(); i++) {
			if (!ck[friends[node][i]]) {
				q.push(friends[node][i]);
				ck[friends[node][i]] = ck[node] + 1;
			}
		}
	}

	int cnt = 0;
	for (int i = 2; i <= n; i++) {
		if (ck[i] == 2 || ck[i] == 3) {
			cnt++;
		}
	}
	cout << cnt << endl;

	return 0;
}