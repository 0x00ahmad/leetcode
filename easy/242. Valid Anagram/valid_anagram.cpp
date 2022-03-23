#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

class Solution {
   public:
    bool isAnagram(string s, string t) {
        int s_len = s.length();
        int t_len = t.length();
        if (s_len != t_len) return false;
        char s_array[s_len];
        char t_array[t_len];
        for (int i = 0; i < s_len; i++) {
            s_array[i] = s[i];
            t_array[i] = t[i];
        }
        std::sort(s_array, s_array + (sizeof(s_array) / sizeof(s_array[0])));
        std::sort(t_array, t_array + (sizeof(t_array) / sizeof(t_array[0])));
        for (int i = 0; i < s_len; i++)
            if (s_array[i] != t_array[i])
                return false;
        return true;
    }
};

int main() {
    return 0;
}
