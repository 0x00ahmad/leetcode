struct Solution {}

impl Solution {
    pub fn add_binary(a: String, b: String) -> String {
        let a_bytes = a.into_bytes();
        let b_bytes = b.into_bytes();
        let mut a_index: i32 = (a_bytes.len() - 1) as i32;
        let mut b_index: i32 = (b_bytes.len() - 1) as i32;
        let mut carry = 0;
        let mut result = vec![];
        while a_index >= 0 || b_index >= 0 {
            let a_digit = if a_index < 0 {
                0
            } else {
                a_bytes[a_index as usize] - b'0'
            };
            let b_digit = if b_index < 0 {
                0
            } else {
                b_bytes[b_index as usize] - b'0'
            };
            let digit = a_digit + b_digit + carry;
            carry = digit / 2;
            result.push(digit % 2);
            a_index -= 1;
            b_index -= 1;
        }
        if carry > 0 {
            result.push(carry);
        }
        result.reverse();
        String::from_utf8(result.iter().map(|c| *c + b'0').collect()).unwrap()
    }
}

fn main() {
    println!("Hello, world!");
}
