#include <iostream>
#include <string>

class Solution {
   public:
    bool isPalindrome(int x) {
        if (x == 0) return true;
        if (x < 0 || x % 10 == 0) return false;
        int reversed_int = 0;
        while (x > reversed_int) {
            int popped = x % 10;
            x /= 10;
            reversed_int = (reversed_int * 10) + popped;
        }
        return (x == reversed_int || x == reversed_int / 10);
    }
};

int main() {
    return 0;
}
