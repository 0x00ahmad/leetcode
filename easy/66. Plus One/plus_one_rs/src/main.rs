struct Solution {}

impl Solution {
    pub fn plus_one(inp: Vec<i32>) -> Vec<i32> {
        let mut digits = inp.clone();
        for i in (0..digits.len()).rev() {
            if digits[i] < 9 {
                digits[i] += 1;
                return digits;
            }
            digits[i] = 0;
        }
        digits.push(0);
        digits[0] = 1;
        return digits;
    }
}

fn main() {
    println!("Hello, world!");
}
