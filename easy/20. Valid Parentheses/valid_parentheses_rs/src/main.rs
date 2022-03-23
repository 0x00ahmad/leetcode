struct Solution {}

impl Solution {
    pub fn is_valid(s: String) -> bool {
        let mut stack = Vec::<char>::new();
        for c in s.chars() {
            let is_opening_brace = c == '{' || c == '(' || c == '[';
            if stack.is_empty() {
                if is_opening_brace {
                    stack.push(c);
                } else {
                    return false;
                }
            } else if is_opening_brace {
                stack.push(c);
            } else if stack[stack.len() - 1] == '(' && c == ')'
                || stack[stack.len() - 1] == '[' && c == ']'
                || stack[stack.len() - 1] == '{' && c == '}'
            {
                stack.pop();
            } else {
                return false;
            }
        }
        return stack.len() == 0;
    }
}

fn main() {
    let test: String = String::from("(");
    let s = Solution::is_valid(test);
    println!("is_valid? {}", s);
}
