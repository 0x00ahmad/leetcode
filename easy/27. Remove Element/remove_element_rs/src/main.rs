struct Solution {}

impl Solution {
    pub fn remove_element(nums: &mut Vec<i32>, val: i32) -> i32 {
        let n_len = nums.len();
        let mut i = 0;
        let mut j = 0;
        while j < n_len {
            if nums[j] != val {
                nums[i] = nums[j];
                i += 1;
            }
            j += 1;
        }
        i as i32
    }
}

fn main() {
    println!("Hello, world!");
}
