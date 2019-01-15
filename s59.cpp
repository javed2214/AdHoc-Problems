// https://leetcode.com/problems/merge-two-sorted-lists/
// Program to Merge Two Linked List in Sorted Order

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL){
            return l2;
        }
        if(l2==NULL){
            return l1;
        }
        if(l1==NULL and l2==NULL){
            return NULL;
        }
        ListNode *temp1,*temp2,*xx;
        temp1=l1;
        vector <int> v1,v2,v;
        while(temp1!=NULL){
            v1.push_back(temp1->val);
            temp1=temp1->next;
        }
        temp2=l2;
        while(temp2!=NULL){
            v2.push_back(temp2->val);
            temp2=temp2->next;
        }
        int i=0,j=0;
        while(i<v1.size() and j<v2.size()){
            if(v1[i]<v2[j]){
                v.push_back(v1[i]);
                i++;
            }
            else{
                v.push_back(v2[j]);
                j++;
            }
        }
        while(i<v1.size()){
            v.push_back(v1[i]);
            i++;
        }
        while(j<v2.size()){
            v.push_back(v2[j]);
            j++;
        }
        xx=l1;
        while(xx->next!=NULL){
            xx=xx->next;
        }
        xx->next=l2;
        xx=l1;
        i=0;
        while(xx!=NULL){
            xx->val=v[i];
            ++i;
            xx=xx->next;
        }
        return l1;
    }