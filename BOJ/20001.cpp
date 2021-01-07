// 고무오리 디버깅
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string input;
	getline(cin, input);

	int top = 0;
	while (true) {
		getline(cin, input);
		if (input == "����") {
			top++;
		}
		else if (input == "��������") {
			if (top) {
				top--;
			}
			else {
				top += 2;
			}
		}
		else if ("�������� ����� ��") {
			break;
		}
	}

	cout << (top ? "����" : "���������� �����");

	return 0;
}