class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *t1=l1,*t2=l2;
         ListNode *m = new ListNode(0);
         ListNode *mai = m;
    
        while(t1!= NULL && t2!=NULL){
            if(t1->val <= t2->val){
                m->next= new ListNode(t1->val);
                 m = m->next;
                t1= t1->next;
            }else {
                 m->next= new ListNode(t2->val);
                 m = m->next;
                t2= t2->next;
            }
        }
        
       if(t1!= NULL){
            m->next = t1;
        }
        if(t2!=NULL){
            m->next = t2;
        }
        
        return mai->next;
    }
};
