//Tortoise and Hare
//One Pass
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

// Tc: O(n/2)
// Sc:O(1)

    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int cnt =0;
        while(temp){
            cnt++;
            temp = temp->next;
        }
        int midNode = (cnt/2) + 1;
        temp = head;
        while(temp){
            midNode--;
            if(midNode == 0) break;
            temp= temp->next;
        }
        return temp;
    }

//two Pass
// Tc:O(n)+ O(n/2)
// Sc:O(1)
