struct Solution {}

impl Solution {
    pub fn remove_duplicates(nums: &mut Vec<i32>) -> i32 {
        let n_len = nums.len();
        if n_len < 1 {
            return 0;
        }
        let mut i = 0;
        let mut j = 0;
        while j < n_len {
            if nums[j] != nums[i] {
                i += 1;
                nums[i] = nums[j];
            }
            j += 1
        }
        return (i + 1) as i32;
    }
}

fn main() {
    println!("Hello, world!");
}
