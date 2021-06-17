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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        set <ListNode *> s;
        ListNode *t = headA;
        while(headA!=NULL){
            s.insert(headA);
            headA=headA->next;
        }
        while(headB!=NULL){
            auto it = s.find(headB);
            if(it!=s.end()){
                return headB;
            }
            headB = headB->next;
        }
    return headB;
    }
};
