#include <iostream>
#include <string>

/*

Time Complexity : O(n)
Space Complexity : O(1)

Best scores ::
    Runtime - 0ms
    Memory Usage ~ 6MB

Explaination
    abs the number and store it's negativity
    on each iteration, you take out a base-7 slice of the number, and add it to the sum multiplying by the value i,
        which keeps track of what position the number slice is in (ones, tens, hundreds etc.)
    finally return the sum but with (or without) it's negative sign if it was negative to begin with


*/

class Solution {
   public:
    std::string convertToBase7(int num) {
        int sum = 0, i = 1, rem;
        bool is_negative = num < 0;
        num = abs(num);
        while (num > 0) {
            rem = num % 7;
            sum += rem * i;
            i *= 10;
            num /= 7;
        }
        return (is_negative ? "-" : "") + std::to_string(sum);
    }
};

int main() {
    return 0;
}
