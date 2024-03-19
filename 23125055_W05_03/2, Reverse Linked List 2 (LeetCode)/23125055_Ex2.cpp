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
    ListNode* reverseList(ListNode* head, int n) {
        if (n == 1) return head;

        ListNode* ret = reverseList(head->next, n - 1);
        ListNode* next = head->next;
        head->next = next->next;
        next->next = head;

        return ret;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;
        if (left == 1) return reverseList(head, right);
        head->next = reverseBetween(head->next, left - 1, right - 1);

        return head;
    }
};