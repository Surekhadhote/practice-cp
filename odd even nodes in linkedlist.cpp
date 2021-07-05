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
    ListNode* oddEvenList(ListNode* head) {
     
        if(head==NULL)return NULL;
        if(head->next==NULL)return head;
        ListNode* odd,*even ,*p,*q;
        odd = head;
        even = head->next;
        head = head->next;
        p=odd;
        q=even;
        int f=0;
        while(odd->next!=NULL&&even->next!=NULL){
        
            odd->next=odd->next->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
             
             
        }
        odd->next = q;
        return p;
    }
};
