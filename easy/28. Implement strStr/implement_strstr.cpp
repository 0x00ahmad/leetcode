#include <iostream>
#include <string>

class Solution {
   public:
    int strStr(std::string haystack, std::string needle) {
        return haystack.find(needle);
    }
};

int main() {
    return 0;
}
