#include <iostream>
#include <map>
#include <string>
#include <vector>

class Solution {
   public:
    int firstUniqChar(std::string s) {
        // * with this one it's around 20ms
        std::vector<int> dict(26, 0);
        for (char c : s)
            dict[c - 'a']++;
        for (int i = 0; i < s.size(); i++)
            if (dict[s[i] - 'a'] == 1)
                return i;
        return -1;
    }
};

int main() {
    return 0;
}
