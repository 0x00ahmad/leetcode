#include <iostream>
#include <string>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
   public:
    ListNode *mergeTwoListsRecursive(ListNode *ll1, ListNode *ll2) {
        if (ll1 == nullptr && ll2 == nullptr) return nullptr;
        if (ll2 == nullptr) return ll1;
        if (ll1 == nullptr) return ll2;
        if (ll1->val < ll2->val) {
            ll1->next = mergeTwoLists(ll1->next, ll2);
            return ll1;
        } else {
            ll2->next = mergeTwoLists(ll1, ll2->next);
            returnll2
        }
    }

    ListNode *mergeTwoLists(ListNode *ll1, ListNode *ll2) {
        if (NULL == ll1) return ll2;
        if (NULL == ll2) return ll1;
        ListNode *head = NULL;
        if (ll1->val < ll2->val) {
            head = ll1;
            ll1 = ll1->next;
        } else {
            head = ll2;
            ll2 = ll2->next;
        }
        ListNode *p = head;
        while (ll1 && ll2) {
            if (ll1->val < ll2->val) {
                p->next = ll1;
                ll1 = ll1->next;
            } else {
                p->next = ll2;
                ll2 = ll2->next;
            }
            p = p->next;
        }
        if (ll1)
            p->next = ll1;
        else
            p->next = ll2;
        return head;
    }
};

int main() {
    return 0;
}
