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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow= head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow= slow->next;
            fast= fast->next->next;
            if(slow == fast){
                slow = head; //either one of them to head nd move both by 1
                while(slow != fast){
                      slow= slow->next;
                      fast=fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};
//TortoiseHare
//TC:O()

//Brute-force using hashing storing entire node
//TC:O(n*2*logn) for ordered map
//SC:O(n)