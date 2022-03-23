#include <iostream>
#include <stack>
#include <string>

class Solution {
   public:
    bool isValid(string s) {
        std::stack<char> cstack;
        for (int i = 0; i < s.length(); i++) {
            bool is_opening_brace = s[i] == '(' || s[i] == '[' || s[i] == '{';
            if (cstack.empty()) {
                if (is_opening_brace) {
                    cstack.push(s[i]);
                } else {
                    return false;
                }
            } else if (is_opening_brace) {
                cstack.push(s[i]);
            } else if ((cstack.top() == '(' && s[i] == ')') ||
                       (cstack.top() == '[' && s[i] == ']') ||
                       (cstack.top() == '{' && s[i] == '}')) {
                cstack.pop();
            } else {
                return false;
            }
        }
        return !cstack.size();
    }
};

int main() {
    return 0;
}
