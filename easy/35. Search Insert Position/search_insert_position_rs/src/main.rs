struct Solution {}

impl Solution {
    pub fn search_insert(nums: Vec<i32>, target: i32) -> i32 {
        let n_len = nums.len();
        let mut low = 0;
        let mut high = n_len - 1;
        if target < nums[0] {
            return 0;
        }
        while low <= high {
            let mid = (low + high) / 2;
            if nums[mid] == target {
                return mid as i32;
            } else if nums[mid] < target {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return low as i32;
    }
}

fn main() {
    println!("Hello, world!");
}
