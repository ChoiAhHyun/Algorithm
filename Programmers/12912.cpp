// 두 정수 사이의 합
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    if (a == b) return a;

    long long sum = 0;
    for (int i = min(a, b); i <= max(a, b); i++) {
        sum += i;
    }
    return sum;
}