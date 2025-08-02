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
   
    bool hasCycle(ListNode *head) {
         ListNode* slow= head;
         ListNode* fast = head;
         while(fast != NULL && fast->next != NULL){
//even and odd linear case , it should not be null as if points to null then no loop exists 
         slow = slow->next;
         fast= fast->next->next;
         //slow moving by 1 ,fast by 2steps simultaneously 
         // difference --> 1.
         if(slow == fast) return true;
         }
         //if while not runs then its a linear data structure..
         return false;
    }
};
//TC: O(N)    use Tortoise and Hare concept slow nd fast pointer...
//SC:O(1)

//they will collide always if there is a loop as the difference between them wiil reduced by 1 at each next step nd it will reach to 0 at the end .. 
//fast is moving 2 steps towards slow 
//slow is moving 1 step away 
//net reduction is 1;



//Brute-force  use hashing to store entire node and then compare if exist or  not 
//TC: O(N * 2* log N)  traversing LL , Performing search and insert in mpp. either use unordered mpp O(1) or ordered mpp O(log N)
//SC:O(N)  storing entire linked list 