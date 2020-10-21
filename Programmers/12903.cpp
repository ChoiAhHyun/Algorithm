// 가운데 글자 가져오기
#include <string>
#include <iostream>

using namespace std;

string solution(string s) {
    return s.size() % 2 ? s.substr(s.size() / 2, 1) : s.substr(s.size() / 2 - 1, 2);
}

int main() {
    cout << solution("abcde") << endl; // c
    cout << solution("qwer") << endl; // we

    return 0;
}