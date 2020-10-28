// 멀쩡한 사각형
using namespace std;

int GCD(int a, int b) {
	while (b != 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

long long solution(int w, int h) {
	int gcd = GCD(w, h);
	return ((long long)w * h) - ((long long)w + h - gcd);
}