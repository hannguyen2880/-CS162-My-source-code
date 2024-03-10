Link problem: https://leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (!head) return nullptr;
        if (head->next == nullptr && n == 1) return nullptr;
        int cntNode = 0;
        ListNode* cur = head;

        while (cur) {
            ++cntNode;
            cur = cur->next;
        }
        //cout << cntNode << endl;
        if (n > cntNode) return nullptr;
        int k = cntNode - n + 1;
        cntNode = 1;
        cur = head;
        if (k == 1) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        while (cntNode < k - 1) {
            cur = cur->next;
            ++cntNode;
        }
        // remove cur->next
        ListNode* tmp = cur->next;
        cur->next = cur->next->next;
        delete tmp;
        return head;
    }
};