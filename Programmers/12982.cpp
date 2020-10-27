// 예산
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int sum = 0, i = 0;

    sort(d.begin(), d.end());

    while (sum <= budget) {
        if (i == d.size()) {
            i++;
            break;
        }

        sum += d[i];
        i++;
    }

    return i - 1;
}