#include <math.h>

#include <iostream>
#include <string>

/*

Time Complexity : O(1)
Space Complexity : O(1)

Best scores ::
    Runtime - 0ms
    Memory Usage ~ 6.2MB

Explaination
    The solution used here is binet's formula, which basically states that
        for finding a fibonacci sequence for the number n, we use the formula:
            F(n) = phi ^ n / sqrt(5)
        where phi is the golden ratio
*/

class Solution {
   public:
    int fib(int n) {
        double phi = (std::sqrt(5) + 1) / 2;
        return std::round(std::pow(phi, n) / sqrt(5));
    }
};

int main() {
    return 0;
}

// * the classic O(n^2)
// class Solution {
//    public:
//     int fib(int n) {
//         if (n <= 0) return 0;
//         if (n == 2 || n == 1) return 1;
//         return calc_fib(n);
//     }
//    private:
//     int calc_fib(int num) {
//         if (num <= 2) return 1;
//         return calc_fib(num - 1) + calc_fib(num - 2);
//     }
// };
