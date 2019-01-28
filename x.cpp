// https://leetcode.com/problems/linked-list-cycle-ii/

class Solution {
public:
    
    ListNode *detectLoop(ListNode *head){
        
        ListNode *p,*q;
        p=q=head;
        while(p and q and q->next){
            p=p->next;
            q=q->next->next;
            if(p==q)
                return p;
        }
        return NULL;
    }
    
    ListNode *detectCycle(ListNode *head) {
        
        ListNode *p;
        p=detectLoop(head);
        if(p==NULL) return NULL;
        if(p){
            ListNode *q=head;
            while(p!=q){
                p=p->next;
                q=q->next;
            }
        }
        return p;
    }
};