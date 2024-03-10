Link problem: https://leetcode.com/problems/add-two-numbers/

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = nullptr, * curans = nullptr;
        int rem = 0;
        ListNode* pcur1 = l1, * pcur2 = l2;
        while (pcur1 && pcur2) {
            int num = pcur1->val + pcur2->val + rem;
            if (num < 10) {
                ListNode* tmp = new ListNode;
                tmp->val = num;
                tmp->next = nullptr;
                if (!ans) {
                    ans = tmp;
                    curans = tmp;
                }
                else {
                    curans->next = tmp;
                    curans = curans->next;
                }
                rem = 0;
            }
            else {
                num %= 10;
                rem = 1;
                ListNode* tmp = new ListNode;
                tmp->val = num;
                tmp->next = nullptr;
                if (!ans) {
                    ans = tmp;
                    curans = tmp;
                }
                else {
                    curans->next = tmp;
                    curans = curans->next;
                }
            }
            pcur1 = pcur1->next;
            pcur2 = pcur2->next;
        }

        while (pcur1) {
            int num = pcur1->val + rem;
            if (num > 9) {
                rem = 1;
                num %= 10;
            }
            else rem = 0;
            ListNode* tmp = new ListNode;
            tmp->val = num;
            tmp->next = nullptr;
            if (!ans) {
                ans = tmp;
                curans = tmp;
            }
            else {
                curans->next = tmp;
                curans = curans->next;
            }
            pcur1 = pcur1->next;
        }

        while (pcur2) {
            int num = pcur2->val + rem;
            if (num > 9) {
                rem = 1;
                num %= 10;
            }
            else rem = 0;
            ListNode* tmp = new ListNode;
            tmp->val = num;
            tmp->next = nullptr;
            if (!ans) {
                ans = tmp;
                curans = tmp;
            }
            else {
                curans->next = tmp;
                curans = curans->next;
            }
            pcur2 = pcur2->next;
        }

        if (rem > 0) {
            ListNode* tmp = new ListNode;
            tmp->val = 1;
            tmp->next = nullptr;

            curans->next = tmp;
        }
        return ans;
    }
};