// 숫자 게임
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B) {
	sort(A.begin(), A.end());
	sort(B.begin(), B.end());

	int answer = 0, idx = -1;

	for (int i = 0; i < A.size(); i++) {
		for (int j = idx + 1; j < B.size(); j++) {
			if (A[i] < B[j]) {
				answer++;
				idx = j;
				break;
			}
		}
	}

	return answer;
}