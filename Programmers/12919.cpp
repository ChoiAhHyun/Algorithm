// 서울에서 김서방 찾기
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
	for (int i = 0; i < seoul.size(); i++) {
		if (seoul[i] == "Kim") {
			return "김서방은 " + to_string(i) + "에 있다";
		}
	}
}