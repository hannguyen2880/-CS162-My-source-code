Link problem: https://leetcode.com/problems/delete-node-in-a-linked-list/description/

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
    void deleteNode(ListNode* node) {
        int tmp = node->val;
        node->val = node->next->val;
        node->next->val = tmp;

        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp;
    }
};