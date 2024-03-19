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
    int cntNodes(ListNode*& list) {
        int cnt = 0;
        ListNode* cur = list;

        while (cur) {
            ++cnt;
            cur = cur->next;
        }
        return cnt;
    }

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* curA = headA, * curB = headB;

        int lenA = cntNodes(headA), lenB = cntNodes(headB);
        int k = (lenA - lenB >= 0 ? lenA - lenB : lenB - lenA);

        if (lenA > lenB) {
            while (k--) curA = curA->next;
        }
        else while (k--) curB = curB->next;

        while (curA != curB) {
            curA = curA->next;
            curB = curB->next;
        }
        return curA;
    }
};