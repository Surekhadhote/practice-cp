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
        ListNode* p=head->next,*t=head,*curr;
     if(n==1&&head->next==NULL)return head->next;
        int c=0;
        while(t!=NULL){
            t= t->next;c++;
        }
        
        if(c==n){
           return head->next;
        }
     
        t=head;
        int l = 0;
        while(l!=(c-n)){
            curr=t;
            t=t->next;
            l++;
        }
        
        
      curr->next=t->next;
        
        return head;
        
    }
};
