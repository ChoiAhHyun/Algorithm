// 하샤드 수
#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = false;
    int n = 0, s = x;

    while (x > 0) {
        n += x % 10;
        x /= 10;
    }

    if (s % n == 0) {
        answer = true;
    }

    return answer;
}

int main(void) {
    cout << solution(10) << endl; // true
    cout << solution(12) << endl; // true
    cout << solution(11) << endl; // false
    cout << solution(13) << endl; // false
    return 0;
}