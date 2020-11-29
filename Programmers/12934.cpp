// 정수 제곱근 판별
#include <cmath>

using namespace std;

long long solution(long long n) {
	double r = sqrt(n);
	return r == (int)r ? pow(r + 1, 2) : -1;
}