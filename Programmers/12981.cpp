// 영어 끝말잇기
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> result(2, 0);
    unordered_set<string> set;

    char ch;
    int i;
    for (i = 0; i < words.size(); i++) {
        if (i > 0 && (words[i][0] != ch || set.find(words[i]) != set.end())) break;

        set.insert(words[i]);
        ch = words[i][words[i].size() - 1];
    }

    if (i < words.size()) {
        int r = (i + 1) % n;
        int q = (i + 1) / n;

        result[0] = r == 0 ? n : r;
        result[1] = r == 0 ? q : q + 1;
    }

    return result;
}