#include <iostream>
#include <string>

static const auto fast = []() {ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return nullptr; }();

class Solution {
   public:
    ListNode *removeElements(ListNode *head, int val) {
        while (head && head->val == val)
            head = head->next;
        ListNode *curr = head;
        while (curr && curr->next) {
            if (curr->next->val == val)
                curr->next = curr->next->next;
            else
                curr = curr->next;
        }
        return head;
    }
};

int main() {
    return 0;
}
