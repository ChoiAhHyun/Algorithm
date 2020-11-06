// 문자열 다루기 기본
#include <string>

using namespace std;

bool solution(string s) {
	if (s.size() != 4 && s.size() != 6) return false;

	for (int i = 0; i < s.size(); i++) {
		if (!isdigit(s[i])) return false;
	}

	return true;
}