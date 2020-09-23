// 타겟 넘버
#include <string>
#include <vector>

using namespace std;

vector<int> v;
int n, t, result = 0;

void DFS(int level, int sum) {
    if (level == n) {
        if (sum == t) {
            result++;
        }
    }
    else {
        DFS(level + 1, sum + v[level]);
        DFS(level + 1, sum - v[level]);
    }
}

int solution(vector<int> numbers, int target) {
    v = numbers;
    n = numbers.size();
    t = target;
    
    DFS(0, 0);
    
    return result;
}