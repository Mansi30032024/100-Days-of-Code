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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next == NULL) return NULL;
        ListNode* slow = head;
        ListNode* fast = head;
        //want to reach before the middle for the changing the link
        // skip 1 step for slow
        fast= fast->next->next;
        while(fast != NULL && fast->next != NULL){
            slow= slow->next;
            fast= fast->next->next;

      }
      ListNode* middle = slow->next;
            slow->next = slow->next->next;
            delete middle;
        return head;
    }
};
// one pass solution
// TC:O(N/2)
// SC:O(1)
/*
 ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL || head->next == NULL) return NULL;
       ListNode* temp = head;
       int n =0;
       while(temp){
        n++;
        temp  = temp->next;
       }
       int res = n/2;
       temp=head;
       ListNode* middle =NULL;
       while(temp){
        res--;
        //trying to reach node that is before the node that has to be deleted
        if(res==0){
             middle = temp->next;
             temp->next = temp->next->next;
             delete middle;
             break;
        }
        temp = temp->next;
       }
        return head;
    }
    TC:O(N+N/2)
    SC:O(1)
    two pass solution optimize it 
    using tortoisehare pointer approach fast slow
    
*/