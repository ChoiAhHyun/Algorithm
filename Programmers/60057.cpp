// 문자열 압축
#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(string s) {
    if (s.size() == 1)
        return 1;
    
    priority_queue<int, vector<int>, greater<int>> result;
    
    for(int i = 1; i <= s.size() / 2; i++) {
        string temp = "";
        
        int j = 0, n = 1;
        while(j < s.size()) {
            if (j > 0) {
                if (s.substr(j - i, i) == s.substr(j, i)) {
                    n++;
                }
                else {
                    if (n > 1)
                        temp += to_string(n) + s.substr(j - i, i);
                    else
                        temp += s.substr(j - i, i);
                    n = 1;
                }
            }
            j += i;
        }
        if (n > 1)
            temp += to_string(n) + s.substr(j - i, s.size() - (j - i));
        else
            temp += s.substr(j - i, s.size() - (j - i));
        
        result.push(temp.size());
    }
    
    return result.top();
}