// 덱
#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	deque<int> dq;
	while (N--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push_front") {
			int n;
			cin >> n;
			dq.push_front(n);
		}
		else if (cmd == "push_back") {
			int n;
			cin >> n;
			dq.push_back(n);
		}
		else if (cmd == "pop_front") {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (cmd == "pop_back") {
			if (dq.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (cmd == "size") {
			cout << dq.size() << endl;
		}
		else if (cmd == "empty") {
			cout << dq.empty() << endl;
		}
		else if (cmd == "front") {
			cout << (dq.empty() ? -1 : dq.front()) << endl;
		}
		else if (cmd == "back") {
			cout << (dq.empty() ? -1 : dq.back()) << endl;
		}
	}

	return 0;
}