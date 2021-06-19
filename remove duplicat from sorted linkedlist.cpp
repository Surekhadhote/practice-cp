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
    ListNode* deleteDuplicates(ListNode* head) {
            ListNode* curr,*p;
        map<int,int> s;
        curr = new ListNode(-1); p=curr;
        while(head!=NULL){
           s[head->val]++;
          head=head->next;
        }
        for(auto i :s){
            if(i.second == 1){
             curr->next = new ListNode(i.first);
            curr= curr->next;}
        }
            return p->next;
    }
};
