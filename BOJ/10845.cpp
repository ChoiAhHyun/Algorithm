// 큐
#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	queue<int> q;
	while (N--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int n;
			cin >> n;
			q.push(n);
		}
		else if (cmd == "pop") {
			if (q.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (cmd == "size") {
			cout << q.size() << endl;
		}
		else if (cmd == "empty") {
			cout << q.empty() << endl;
		}
		else if (cmd == "front") {
			cout << (q.empty() ? -1 : q.front()) << endl;
		}
		else if (cmd == "back") {
			cout << (q.empty() ? -1 : q.back()) << endl;
		}
	}

	return 0;
}