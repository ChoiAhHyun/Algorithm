// 나는야 포켓몬 마스터 이다솜
#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	unordered_map<int, string> dict_int;
	unordered_map<string, int> dict_str;
	for (int i = 1; i <= N; i++) {
		string input;
		cin >> input;
		dict_int[i] = input;
		dict_str[input] = i;
	}
	while (M--) {
		string input;
		cin >> input;
		int number = atoi(input.c_str());
		if (number) {
			cout << dict_int[number] << '\n';
		}
		else {
			cout << dict_str[input] << '\n';
		}
	}

	return 0;
}