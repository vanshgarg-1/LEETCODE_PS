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
    private:
            ListNode* middle(ListNode* &head){
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
        }
        return slow;
    }
    ListNode* reverse(ListNode* &head){
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* next=curr->next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    
    public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        
        if(temp==NULL)
            return true;
            
        if(head->next==NULL)
            return true;
        

        ListNode* mid=middle(head);
        ListNode* temp1=head;
        ListNode* temp2=reverse(mid->next);
        while(temp2!=NULL){
            if(temp1->val!=temp2->val)
                return false;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return true;
    }

};