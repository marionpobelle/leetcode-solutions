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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* res = new ListNode(0);
        ListNode* currentNode = res;
        vector<ListNode*> pool;
        for(int i = 0; i < lists.size(); i++)
        {
            if(lists[i] != nullptr)
            {
                pool.push_back(lists[i]);
            }
        }
        while(!pool.empty())
        {
            std::sort(pool.begin(), pool.end(), [](const ListNode* a, const ListNode* b){return a->val < b->val;});
            ListNode* minNode = pool[0];
            if(minNode->next != nullptr)
            {
                pool.push_back(minNode->next);
            }
            currentNode->next = minNode;
            currentNode = currentNode->next;
            pool.erase(pool.begin());
        }
        return res->next;
    }
};