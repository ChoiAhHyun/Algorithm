// 괄호 변환
#include <string>
#include <vector>
#include <stack>

using namespace std;

bool isBalanced(string p) {
    int left = 0, right = 0;
    for(int i = 0; i < p.size(); i++) {
        if (p[i] == '(')
            left++;
        else
            right++;
    }
    
    if (left == right)
        return true;
    else
        return false;
}

bool isRight(string p) {
    bool result = false;
    stack<char> s;
    
    for(int i = 0; i < p.size(); i++) {
        if (p[i] == '(') {
            s.push(p[i]);
        }
        else {
            if (s.empty()) {
                return false;
            }
            else if (s.top() == '('){
                s.pop();
            }
            else {
                return false;
            }
        }
    }
    
    if (s.empty())
        return true;
    else
        return false;
}

string solution(string p) {
    if (p.empty() || isRight(p)) {
        return p;
    }
    else {
        string u = "", v = "";
        for (int i = 1; i <= p.size(); i++) {
            if (isBalanced(p.substr(0, i))) {
                u = p.substr(0, i);
                if (u != p)
                    v = p.substr(i, p.size() - i);
                
                if (isRight(u)) {
                    return u + solution(v);
                }
                else {
                    string temp1 = "(" + solution(v) + ")";
                    string temp2 = u.substr(1, u.size() - 2);
                    for (int j = 0; j < temp2.size(); j++) {
                        if (temp2[j] == '(')
                            temp2[j] = ')';
                        else
                            temp2[j] = '(';
                    }
                    return temp1 + temp2;
                }
            }
        }
    }
}