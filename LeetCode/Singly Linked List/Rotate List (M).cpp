Link problem: https://leetcode.com/problems/rotate-list/description/

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
        if (!head) return nullptr;
        if (k == 0) return head;
        int cntNode = 0;
        ListNode* cur = head;

        while (cur) {
            ++cntNode;
            cur = cur->next;
        }
        k %= cntNode;
        if (k == 0) return head;
        int pos = cntNode - k;

        cntNode = 0;
        cur = head;
        while (cntNode < pos - 1) {
            ++cntNode;
            cur = cur->next;
        }

        ListNode* tmp = cur->next;
        cur->next = nullptr;

        ListNode* curtmp = tmp;

        while (curtmp->next) curtmp = curtmp->next;
        curtmp->next = head;
        head = tmp;

        return head;
    }
};