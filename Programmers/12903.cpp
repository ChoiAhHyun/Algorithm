// 가운데 글자 가져오기
#include <string>
#include <iostream>

using namespace std;

string solution(string s) {
    int m = s.size() / 2;

    if (s.size() % 2) {
        return s.substr(m, 1);
    }
    else {
        return s.substr(m - 1, 2);
    }
}

int main() {
    cout << solution("abcde") << endl; // c
    cout << solution("qwer") << endl; // we

    return 0;
}