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
   ListNode* reverseLL(ListNode* head){
    if(head == NULL || head->next == NULL){   return head;  }
    ListNode* newHead = reverseLL(head->next);
    ListNode* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
   }
    bool isPalindrome(ListNode* head) {
         if(head== NULL && head->next == NULL){
        return true;
     }
     //finding mid m1(first)
     ListNode* slow = head ;
     ListNode* fast = head;
     while(fast->next != NULL && fast->next->next != NULL){//O(n/2)
        slow = slow->next;
        fast = fast->next->next;
     }
     ListNode* newHead = reverseLL(slow->next); //O(n/2)
     ListNode* first = head ;
     ListNode* second = newHead;
     while(second != NULL){//O(n/2)
        if(first->val != second->val) 
        {
         reverseLL(newHead); //O(n/2)
        return false;
        }
        first = first->next;
        second= second->next;
     }
     reverseLL(newHead);//revert to original
      return true ; 
    }
};
//TC: O(2n)
// SC:O(1)
//brute force -->  TC: O(2n) SC:O(n)   storing in stack nd then comparing
