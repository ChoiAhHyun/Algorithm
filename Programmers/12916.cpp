// 문자열 내 p와 y의 개수
#include <string>

using namespace std;

bool solution(string s) {
    int p_cnt = 0, y_cnt = 0;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'p' || s[i] == 'P') {
            p_cnt++;
        }
        else if (s[i] == 'y' || s[i] == 'Y') {
            y_cnt++;
        }
    }

    return p_cnt == y_cnt;
}