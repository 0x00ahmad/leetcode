#include <iostream>
#include <string>

class Solution {
   public:
    std::vector<int> intersect(std::vector<int> &a, std::vector<int> &b) {
        std::sort(a.begin(), a.end());
        std::sort(b.begin(), b.end());
        a.erase(std::set_intersection(a.begin(), a.end(), b.begin(), b.end(), a.begin()), a.end());
        return a;
    }
};

int main() {
    return 0;
}
