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
        if(head && head->next==nullptr)return false;
    ListNode* slow,*fast;
    slow=fast=head;
while(fast!=nullptr && fast->next!= nullptr){
  if(slow->next)
slow=slow->next;
if(fast->next)
fast=fast->next->next;
if(slow==fast)return true;

}

    return false;
    }
};