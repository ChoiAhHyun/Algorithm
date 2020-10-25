// 수 찾기
#include <unordered_set>

using namespace std;

int main() {
	int N, M;
	scanf("%d", &N);
	unordered_set<int> set(N);
	for (int i = 0; i < N; i++) {
		int n;
		scanf("%d", &n);
		set.insert(n);
	}

	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		int m, result;
		scanf("%d", &m);

		result = set.find(m) != set.end() ? 1 : 0;
		printf("%d\n", result);
	}

	return 0;
}