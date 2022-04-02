struct Solution {}

impl Solution {
    pub fn my_sqrt(x: i32) -> i32 {
        if x == 0 {
            return x;
        }
        let mut lower_bound = 1;
        let mut upper_bound = x;
        while lower_bound <= upper_bound {
            let mid = lower_bound + ((upper_bound - lower_bound) / 2);
            if mid > x / mid {
                upper_bound = mid - 1;
            } else {
                lower_bound = mid + 1;
            }
        }
        return upper_bound;
    }
}

fn main() {
    println!("Hello, world!");
}
