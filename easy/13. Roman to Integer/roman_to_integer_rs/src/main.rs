use std::collections::HashMap;

macro_rules! hashmap {
    ($( $key: expr => $val: expr ),*) => {{
         let mut map = ::std::collections::HashMap::new();
         $( map.insert($key, $val); )*
         map
    }}
}

struct Solution {}

impl Solution {
    pub fn roman_to_int(s: String) -> i32 {
        let numeral_map: HashMap<char, i32> =
            hashmap!['I' => 1, 'V' => 5, 'X' => 10, 'L' => 50, 'C' => 100, 'D'=>500, 'M'=>1000];
        let mut result = 0;
        let s_len = s.len();
        for i in 0..s_len {
            let curr: char = s.as_bytes()[i] as char;
            if i + 1 != s_len {
                let next_char: char = s.as_bytes()[i + 1] as char;
                if curr == 'I' && (next_char == 'V' || next_char == 'X') {
                    result -= 1;
                    continue;
                } else if curr == 'X' && (next_char == 'L' || next_char == 'C') {
                    result -= 10;
                    continue;
                } else if curr == 'C' && (next_char == 'D' || next_char == 'M') {
                    result -= 100;
                    continue;
                }
            }
            match numeral_map.get(&curr) {
                Some(f) => result += f,
                None => println!("yaya"),
            }
        }
        return result;
    }
}

fn main() {
    println!("Hello, world!");
}
