struct Solution {}

impl Solution {
    pub fn max_sub_array(nums: Vec<i32>) -> i32 {
        let mut max_sum = nums[0];
        let mut current_sum = max_sum;
        for i in 1..nums.len() {
            current_sum = std::cmp::max(nums[i] + current_sum, nums[i]);
            max_sum = std::cmp::max(max_sum, current_sum);
        }
        return max_sum;
    }
}

fn main() {
    println!("Hello, world!");
}
