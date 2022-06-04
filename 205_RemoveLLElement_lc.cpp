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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy= new ListNode(NULL,head);
        ListNode* curr=head;
        ListNode* prev=dummy;
        ListNode* tmp;
        while(curr){
            tmp=curr->next;
            if(curr->val==val){
                prev->next=tmp;
            }else{
                prev=curr;
            }
            curr=tmp;
        }
        return dummy->next;
    }
};