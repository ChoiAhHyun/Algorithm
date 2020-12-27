// 최대 힙
#include <cstdio>
#include <queue>

using namespace std;

int main(void) {
	int N;
	scanf("%d", &N);
	priority_queue<int> pq;
	while (N--) {
		int x;
		scanf("%d", &x);
		if (x > 0) {
			pq.push(x);
		}
		else {
			if (pq.empty()) {
				printf("%d\n", 0);
			}
			else {
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
	}

	return 0;
}