// 야근 지수
#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
	priority_queue<int> pq(works.begin(), works.end());

	while (n > 0) {
		int top = pq.top(); pq.pop();

		if (top == 0) {
			break;
		}

		pq.push(top - 1);
		n--;
	}

	while (!pq.empty()) {
		int top = pq.top(); pq.pop();
		answer += (long long) top * top;
	}

    return answer;
}

int main(void) {
	cout << solution(4, { 4, 3, 3 }) << endl; // 12
	cout << solution(1, { 2, 1, 2 }) << endl; // 6
	cout << solution(3, { 1, 1 }) << endl; // 0
	return 0;
}