// 점프와 순간 이동
using namespace std;

int solution(int n)
{
	int result = 0;

	while (n > 0) {
		result += n % 2;
		n /= 2;
	}

	return result;
}