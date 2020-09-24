// 단어 변환
#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int N, m;
string T;
vector<bool> ck;

void DFS(int level, string str, vector<string> words) {
    if (level > N) return;

    if (str == T) {
        if (level < m) {
            m = level;
        }
    }
    else {
        for (int k = 0; k < words.size(); k++) {
            if (!ck[k]) {
                int dif = 0;
                for (int i = 0; i < words[k].size(); i++) {
                    if (words[k][i] != str[i]) {
                        dif++;
                    }
                }

                if (dif == 1) {
                    ck[k] = true;
                    DFS(level + 1, words[k], words);
                    ck[k] = false;
                }
            }
        }
    }
}

int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    bool find = false;

    for (string w : words) {
        if (w == target)
            find = true;
    }

    if (find) {
        N = words.size();
        m = 100;
        T = target;
        ck = vector<bool> (words.size(), false);

        DFS(0, begin, words);

        return m == 100 ? 0 : m;
    }
    else {
        return 0;
    }
}

int main(void) {
    cout << solution("hit", "cog", { "hot", "dot", "dog", "lot", "log", "cog" }) << endl; // 4
    cout << solution("hit", "hhh", { "hhh", "hht" }) << endl; // 2
    cout << solution("hit", "wow", { "hot", "dog", "dot", "wow" }) << endl; // 0
    return 0;
}