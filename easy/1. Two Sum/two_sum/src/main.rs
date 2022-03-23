use std::collections::HashMap;

struct Solution {}

impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let l = nums.len();
        let mut dict = HashMap::<i32, i32>::new();
        for i in 0..l {
            let t = target - nums[i];
            if let Some(x) = dict.get(&t) {
                return vec![*x, i as i32];
            }
            dict.insert(nums[i], i as i32);
        }
        vec![0, 0]
    }
}

fn main() {
    let s = Solution::two_sum(vec![1, 2, 3, 4, 5], 8 as i32);
    println!("The output : {} & {}", s[0], s[1]);
}
