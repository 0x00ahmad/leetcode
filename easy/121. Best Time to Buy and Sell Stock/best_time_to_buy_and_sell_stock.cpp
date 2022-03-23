#include <iostream>
#include <string>

class Solution {
   public:
    int maxProfit(std::vector<int> &prices) {
        int maxSoFar = 0, currMax = 0;
        for (int i = 1; i < prices.size(); i++) {
            currMax = std::max(0, currMax += prices[i] - prices[i - 1]);
            maxSoFar = std::max(currMax, maxSoFar);
        }
        return maxSoFar;
    }
};

int main() {
    return 0;
}
