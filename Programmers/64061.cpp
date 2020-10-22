// 크레인 인형뽑기 게임
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
	stack<int> s;
	int answer = 0;

	for (int i = 0; i < moves.size(); i++) {
		for (int j = 0; j < board.size(); j++) {
			int temp = board[j][moves[i] - 1];
			if (temp > 0) {
				if (!s.empty() && temp == s.top()) {
					s.pop();
					answer += 2;
				}
				else {
					s.push(temp);
				}
				temp = 0;
				break;
			}
		}
	}

	return answer;
}