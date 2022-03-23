#include <iostream>
#include <string>
#include <unordered_map>

class Solution {
   public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::unordered_map<char, int> magFrequencyMap(26);
        for (auto c : magazine) ++magFrequencyMap[c];
        for (auto c : ransomNote)
            if (--magFrequencyMap[c] < 0) 
            return false;
        return true;
    }
};

int main() {
    return 0;
}
