
#include <iostream>
#include <map>
#include <vector>

class Solution {
   public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {
        std::map<int, int> dictionary;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (dictionary.find(diff) != dictionary.end())
                return std::vector<int>{dictionary[diff], i};
            dictionary[nums[i]] = i;
        }
        return std::vector<int>{0, 0};
    }
};

int main() {
    return 0;
}