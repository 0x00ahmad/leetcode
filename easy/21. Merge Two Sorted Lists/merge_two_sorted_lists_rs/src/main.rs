// Definition for singly-linked list.
#[derive(PartialEq, Eq, Clone, Debug)]
pub struct ListNode {
    pub val: i32,
    pub next: Option<Box<ListNode>>,
}

impl ListNode {
    #[inline]
    fn new(val: i32) -> Self {
        ListNode { next: None, val }
    }
}

struct Solution {}

impl Solution {
    pub fn merge_two_lists(
        list1: Option<Box<ListNode>>,
        list2: Option<Box<ListNode>>,
    ) -> Option<Box<ListNode>> {
        match (list1, list2) {
            (None, None) => return None,
            (None, Some(r)) => return Some(r),
            (Some(l), None) => return Some(l),
            (Some(l), Some(r)) => {
                if l.val <= r.val {
                    return Some(Box::new(ListNode {
                        next: Solution::merge_two_lists(l.next, Some(r)),
                        val: l.val,
                    }));
                } else {
                    return Some(Box::new(ListNode {
                        next: Solution::merge_two_lists(Some(l), r.next),
                        val: r.val,
                    }));
                }
            }
        }
    }
}

fn main() {
    println!("Hello, world!");
}
