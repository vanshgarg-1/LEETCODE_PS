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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        ListNode* p = head,*q=head->next;
        while(true){
            swap(p->val,q->val);
            if(!(q->next && q->next->next))break;
            p = p->next->next;
            q = q->next->next;
        }
        return head;
    }
};