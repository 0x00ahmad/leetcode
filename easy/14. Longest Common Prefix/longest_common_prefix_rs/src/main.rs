struct Solution {}

impl Solution {
    pub fn longest_common_prefix(strs: Vec<String>) -> String {
        if strs.len() < 1 {
            return String::new();
        }
        let mut longest_prefix = strs[0].to_owned();
        for idx in 1..strs.len() {
            while strs[idx].find(&longest_prefix) != Some(0) {
                longest_prefix = longest_prefix[..longest_prefix.len() - 1].to_owned();
            }
        }
        longest_prefix.to_string()
    }
}

fn main() {
    println!("Hello, world!");
}
