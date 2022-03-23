#include <iostream>
#include <string>
#include <unordered_set>

/*


Time Complexity : O(1) as we are checking in a set
Space Complexity : O(n) as we have a static set

Best scores ::
    Runtime - 0ms
    Memory Usage ~ 6.1MB

Explaination
    I don't think we need one today :^]

*/

class Solution {
   public:
    bool checkPerfectNumber(int num) {
        static std::unordered_set<int> perfect_nums = {6, 28, 496, 8128, 33550336};
        return perfect_nums.count(num);
    }
};

int main() {
    return 0;
}

// * ok But dreadfully slow for large numbers
// class Solution {
//    public:
//     bool checkPerfectNumber(int num) {
//         currently there are no known even perfect numbers so we can exclude those while the theory holds :)
//         if (num % 2 != 0) return false;
//         int sum = 0;
//         for (int i = 1; i < num; i++) {
//             if (num % i == 0) sum += i;
//         }
//         return sum == num;
//     }
// };
