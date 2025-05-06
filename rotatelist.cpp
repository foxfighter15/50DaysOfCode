/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
  
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (k == 0 || head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* curr = head;
        int length = 1;  

        while (curr->next != nullptr) {
            length++;
            curr = curr->next;
        }
        curr->next = head;
        k = k % length;
        if (k == 0) { 
            curr->next = nullptr;
            return head;
        }
        curr = head;
        for (int i = 0; i < length - k - 1; i++) {
            curr = curr->next;
        }
        head = curr->next;
        curr->next = nullptr;
        return head;
    }
};
