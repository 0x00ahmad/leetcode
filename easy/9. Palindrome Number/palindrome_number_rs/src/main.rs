struct Solution {}

impl Solution {
    pub fn is_palindrome(y: i32) -> bool {
        let mut x = y;
        if x == 0 {
            return true;
        }
        if x < 0 || x % 10 == 0 {
            return false;
        }
        let mut reversed_int = 0;
        while x > reversed_int {
            let popped = x % 10;
            x /= 10;
            reversed_int = (reversed_int * 10) + popped;
        }
        return x == reversed_int || x == reversed_int / 10;
    }
}

fn main() {
    println!("Hello, world!");
}
