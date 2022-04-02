#include <iostream>

class Solution {
   public:
    int mySqrt(int x) {
        if (x == 0) return 0;
        int lower_bound = 1, upper_bound = x;
        while (lower_bound <= upper_bound) {
            // the next 2 lines are essentially the same as squaring and then checking the number
            int mid = lower_bound + ((upper_bound - lower_bound) / 2);
            if (mid > x / mid) {
                upper_bound = mid - 1;
            } else {
                lower_bound = mid + 1;
            }
        }
        return upper_bound;
    }
};

int main() {
    return 0;
}
