// 스택
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	stack<int> st;
	while (N--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int n;
			cin >> n;
			st.push(n);
		}
		else if (cmd == "pop") {
			if (st.empty()) {
				cout << -1 << endl;
			}
			else {
				cout << st.top() << endl;
				st.pop();
			}
		}
		else if (cmd == "size") {
			cout << st.size() << endl;
		}
		else if (cmd == "empty") {
			cout << st.empty() << endl;
		}
		else if (cmd == "top") {
			cout << (st.empty() ? -1 : st.top()) << endl;
		}
	}

	return 0;
}