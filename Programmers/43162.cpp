// 네트워크
#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int n, vector<vector<int>> computers) {
    int answer = 0, all = 0;
    queue<int> q;
    vector<int> ck(computers.size(), 0);

    for (int i = 1; i <= computers.size(); i++) {
        all += i;
    }

    int sum = 0;
    while (sum < all) {
        if (q.empty()) {
            for (int i = 0; i < ck.size(); i++) {
                if (ck[i] == 0) {
                    answer++;
                    q.push(i);
                    ck[i] = 1;
                    sum += i + 1;
                    break;
                }
            }
        }
        else {
            int front = q.front();
            q.pop();
            for (int j = 0; j < computers[front].size(); j++) {
                if (j != front && computers[front][j] == 1 && ck[j] == 0) {
                    q.push(j);
                    ck[j] = 1;
                    sum += j + 1;
                }
            }
        }
    }

    return answer;
}

int main(void) {
    cout << solution(3, { {1, 1, 0}, {1, 1, 0}, {0, 0, 1} }) << endl; // 2
    return 0;
}