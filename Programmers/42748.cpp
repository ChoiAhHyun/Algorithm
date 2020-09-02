// K번째수
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int Kth_num(vector<int> array, vector<int> command) {
    vector<int> v(array.begin() + (command[0] - 1), array.begin() + command[1]);
    sort(v.begin(), v.end());
    return v[command[2] - 1];
}

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer(commands.size());
    for (int i = 0; i < commands.size(); i++) {
        answer[i] = Kth_num(array, commands[i]);
    }
    return answer;
}

void print_vector(vector<int> v) {
    for (int n : v) {
        cout << n << " ";
    }
    cout << endl;
}

int main(void) {
    print_vector(solution({ 1, 5, 2, 6, 3, 7, 4 }, { {2, 5, 3}, {4, 4, 1}, {1, 7, 3} })); // 5 6 3
    return 0;
}