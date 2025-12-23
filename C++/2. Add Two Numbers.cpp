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
        int carry = 0;
        int sum = 0;
        ListNode* head = new ListNode();
        ListNode* currentNode = head;
        while(l1 != nullptr || l2 != nullptr)
        {
            sum = (l1 != nullptr?l1->val:0) + (l2 != nullptr?l2->val:0) + carry;
            carry = 0;
            if(sum >= 10)
            {
                sum = sum - 10;
                carry = 1;
            }
            currentNode->val = (sum);
            if(l1 != nullptr) l1 = l1->next != nullptr?l1->next:nullptr;
            if(l2 != nullptr) l2 = l2->next != nullptr?l2->next:nullptr;
            if(l1 != nullptr || l2 != nullptr)
            {
                currentNode->next = new ListNode();
                currentNode = currentNode->next;
            }
        }
        if(carry > 0)
        {
            currentNode->next = new ListNode(1);
            currentNode = currentNode->next;
        }
        return head;
    }
};