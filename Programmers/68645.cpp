// 삼각 달팽이
#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    vector<vector<int>> v(n, vector<int>(n, 0));

    int size = 0;
    for (int i = 1; i <= n; i++) {
        size += i;
    }

    int x = 0, y = 0, dr = 1;
    for (int i = 1; i <= size; i++) {
        v[x][y] = i;

        if (dr % 3 == 1) {
            if (x + 1 == n || v[x + 1][y] != 0) {
                dr++;
                y++;
            }
            else {
                x++;
            }
        }
        else if (dr % 3 == 2) {
            if (y + 1 == n || v[x][y + 1] != 0) {
                dr++;
                x--;
                y--;
            }
            else {
                y++;
            }
        }
        else {
            if (v[x - 1][y - 1] != 0) {
                dr++;
                x++;
            }
            else {
                x--;
                y--;
            }
        }
    }

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            if (v[i][j] != 0) {
                answer.push_back(v[i][j]);
            }
        }
    }

    return answer;
}