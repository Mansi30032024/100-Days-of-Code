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
        ListNode* fast = head;
        ListNode* slow = head; 
        for(int i=0;i<n;i++) fast = fast->next;//n steps
        if(fast ==NULL) return head->next;  //N=length of Linked list

        while(fast->next != NULL){//till it reaches last
          // one-one step simultaneously
            fast= fast->next;
            slow= slow->next;
        }
     ListNode* delNode = slow->next; //to be deleted
     slow->next = slow->next->next;
     delete delNode;
      return head;

    }
};
/* 

Using struct or class	         Memory Allocation Style	   Deallocation
Has constructors	                   new	                      delete
Plain data, no constructors	           malloc	                  free


free() --> c-style function
memory from malloc, calloc, realloc

delete --> c++ operator
memory from new or new[]
     
     free                          delete
❌ Does not call destructor	      ✅ Calls destructor before deallocating
❌ Not type-safe	                  ✅ Type-safe
❌ Cannot be overloaded	          ✅ Can be overloaded
 Slightly faster (no destructor)	🛡️ Safer (calls destructor)

*/