#include <iostream>
#include <map>
#include <string>

class Solution {
   public:
    int romanToInt(string s) {
        map<char, int> numeral_map = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int res = 0;
        for (int i = 0; i < s.length(); i++) {
            // these are the special cases in which we have to keep into account the next numbers
            if (s[i] == 'I' && (s[i + 1] == 'V' || s[i + 1] == 'X')) {
                res -= 1;
            } else if (s[i] == 'X' && (s[i + 1] == 'L' || s[i + 1] == 'C')) {
                res -= 10;
            } else if (s[i] == 'C' && (s[i + 1] == 'D' || s[i + 1] == 'M')) {
                res -= 100;
            } else {
                res += numeral_map[s[i]];
            }
        }
        return res;
    }
};

int main() {
    return 0;
}
