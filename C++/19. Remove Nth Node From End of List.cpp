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
        if(head->next == nullptr)
        {
            return nullptr;
        }
        int listSize = 0;
        ListNode* currentNode = head;
        while(currentNode != nullptr)
        {
            listSize++;
            currentNode = currentNode->next;
        }
        currentNode = head;
        if(n == listSize)
        {
            head = head->next;
            return head;
        }
        int index = 0;
        while(index < listSize - n - 1)
        {
            index++;
            currentNode = currentNode->next;
        }
        if(n == 1)
        {
            currentNode->next = nullptr;
        }
        else
        {
            currentNode->next = currentNode->next->next;
        }
        return head;
    }
};