struct Solution {}

impl Solution {
    pub fn length_of_last_word(s: String) -> i32 {
        // find the length of the last word
        let mut last_word_len = 0;
        for i in (0..s.len()).rev() {
            if s.as_bytes()[i] == b' ' {
                if last_word_len > 0 {
                    return last_word_len as i32;
                }
            } else {
                last_word_len += 1;
            }
        }
        return last_word_len as i32;
    }
}

fn main() {
    println!("Hello, world!");
}
