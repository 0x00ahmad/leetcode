#include <iostream>
#include <string>
#include <vector>

/*

Time Complexity : O(n)
Space Complexity : O(1)

Best scores ::
    Runtime - 62ms
    Memory Usage ~ 25.9 MB

Explaination
    it's relativesly simple, to find the total poisoned duration just iterate over each timeStamp and
        increment by the minimum of the duration & difference of current and next timeStamp
    finally return the total + duration to compensate for the final duration

*/

class Solution {
   public:
    int findPoisonedDuration(std::vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        if (n < 1) return 0;
        int poisonedDuration = 0;
        for (int i = 0; i < n - 1; i++)
            poisonedDuration += std::min(timeSeries[i + 1] - timeSeries[i], duration);
        return poisonedDuration + duration;
    }
};

int main() {
    return 0;
}
