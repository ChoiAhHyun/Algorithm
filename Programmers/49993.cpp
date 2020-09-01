// 스킬트리
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;

    for (int i = 0; i < skill_trees.size(); i++) {
        string result = "";

        for (int j = 0; j < skill_trees[i].size(); j++) {
            for (int k = 0; k < skill.size(); k++) {
                if (skill_trees[i][j] == skill[k]) {
                    result += skill[k];
                }
            }
        }

        if (skill.find(result) == 0) {
            answer++;
        }
    }
    return answer;
}

int main(void) {
    cout << solution("CBD", { "BACDE", "CBADF", "AECB", "BDA" }) << endl; // 2
    return 0;
}