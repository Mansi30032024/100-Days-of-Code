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
 ListNode* findmid( ListNode* head){//O(N/2)
   if(head==NULL || head->next == NULL) return head;
     ListNode* fast = head;
      ListNode* slow = head;
      fast = fast->next;//initialization, which avoids returning the second middle in even-length lists
      while(fast != NULL  && fast->next != NULL){
        slow= slow->next;
        fast = fast->next->next;
      }
      return slow;
 }
 
    ListNode* mergeTwo(ListNode* list1, ListNode* list2) {
   
       ListNode* dNode = new ListNode(-1);
       ListNode* temp = dNode;
        while(list1 != NULL && list2 != NULL){
             if(list1->val < list2->val){
                temp->next = list1;
                temp = list1;
                list1=list1->next;
             }
             else{
                temp->next = list2;
                temp = list2;
                list2 = list2->next;
             }
        }
        if(list1 != NULL) temp->next = list1;
        else temp->next = list2;
       
        return dNode->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next == NULL) return head;
        ListNode* middle = findmid(head);//TortoiseHare
        //returning m1
       
          ListNode* right = middle->next;
          middle->next = nullptr;
         ListNode* left = head;
        
          left  = sortList(left);
          right = sortList(right);
           
    return mergeTwo(left, right);
    }
};