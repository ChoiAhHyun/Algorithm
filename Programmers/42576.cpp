// 완주하지 못한 선수
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> map;

    for (int i = 0; i < participant.size(); i++) {
        map[participant[i]]++;
    }
    for (int i = 0; i < completion.size(); i++) {
        map[completion[i]]--;
    }
    
    for (auto& m : map) {
        if (m.second > 0)
            return m.first;
    }
}