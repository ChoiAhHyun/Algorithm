// 수박수박수박수박수박수?
#include <string>

using namespace std;

string arr[2] = { "수", "박" };

string solution(int n) {
	string answer = "";

	for (int i = 0; i < n; i++) {
		answer += arr[i % 2];
	}

	return answer;
}