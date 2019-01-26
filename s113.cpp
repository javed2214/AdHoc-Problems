// https://leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode* deleteDuplicates(ListNode* head) {
        
        vector<int>v;
        if(head==NULL) return NULL;
        ListNode *p=head,*q;
        while(p->next!=NULL){
            if(p->val!=p->next->val)
                v.push_back(p->val);
            p=p->next;
        }
        v.push_back(p->val);
        p=head;
        for(int i=0;i<v.size();i++){
            p->val=v[i];
            q=p;
            p=p->next;
        }
        q->next=NULL;
        
        return head;
    }
};