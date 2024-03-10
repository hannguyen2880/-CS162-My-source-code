/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* pNext = head;
        ListNode* pPrev = head;

        for(;;) {
            if (pNext == NULL) return false;
            if (pNext->next == NULL) return false;
            pNext = pNext->next->next;
            pPrev = pPrev->next;

            if (pNext == pPrev) return true;
        }
    }
};