// 콜라츠 추측
#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = (long long) num;

    while (n != 1) {
        if (answer >= 500) {
            return -1;
        }

        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = 3 * n + 1;
        }
        answer++;
    }

    return answer;
}