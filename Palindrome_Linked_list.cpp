
class Solution {
public:
   ListNode* reverse(ListNode* head) {
    ListNode* prev = nullptr;
    ListNode* curr = head;
    ListNode* next;

    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool isIdentical(ListNode* n1, ListNode* n2) {
    for (; n1 && n2; n1 = n1->next, n2 = n2->next)
        if (n1->val != n2->val)
            return false;

    return true;
}

bool isPalindrome(ListNode* head) {
    if (!head || !head->next)
        return true;

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* head2 = reverse(slow->next);
    slow->next = nullptr;
    bool ret = isIdentical(head, head2);

    head2 = reverse(head2);
    slow->next = head2;

    return ret;
}
};