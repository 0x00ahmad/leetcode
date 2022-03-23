#include <math.h>

#include <iostream>
#include <string>
#include <vector>

/*

Time Complexity : O(n)
Space Complexity : O(1)

Best scores ::
    Runtime - 3ms 40%
    Memory Usage ~ 6.1MB 69%

Explaination
    keep reducing from the mid point, and finding which 'mid' is divisible to the area.

*/

class Solution {
   public:
    std::vector<int> constructRectangle(int area) {
        for (int mid = std::sqrt(area); mid > 0; mid--)
            if (!(area % mid))
                return std::vector<int>{area / mid, mid};
        return std::vector<int>{0, 0};
    }
};

int main() {
    return 0;
}
