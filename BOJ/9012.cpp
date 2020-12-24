// 괄호
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	while (T--) {
		string str, output = "YES";
		cin >> str;
		stack<int> st;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(') {
				st.push(str[i]);
			}
			else {
				if (st.empty()) {
					output = "NO";
					break;
				}
				else {
					st.pop();
				}
			}
		}
		if (!st.empty()) {
			output = "NO";
		}
		cout << output << endl;
	}

	return 0;
}