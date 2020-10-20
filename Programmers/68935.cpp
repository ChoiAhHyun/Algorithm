// 3진법 뒤집기
#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    string str = "";

    while (n > 0) {
        str += to_string(n % 3);
        n /= 3;
    }

    for (int i = str.size() - 1; i >= 0; i--) {
        answer += (str[i] - '0') * pow(3, str.size() - 1 - i);
    }

    return answer;
}

int main() {
    cout << solution(45) << endl; // 7
    cout << solution(125) << endl; // 229
    return 0;
}