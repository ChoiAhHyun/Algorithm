// 두 개 뽑아서 더하기
#include <string>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution1(vector<int> numbers) {
    vector<int> answer;
    
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            answer.push_back(numbers[i] + numbers[j]);
        }
    }
    
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    return answer;
}

vector<int> solution1(vector<int> numbers) {
    vector<int> answer;
    set<int> s;
    
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            s.insert(numbers[i] + numbers[j]);
        }
    }
    
    for (int elem : s) {
        answer.push_back(elem);
    }
    
    return answer;
}