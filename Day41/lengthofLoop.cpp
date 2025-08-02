/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
  int findLen(Node* slow, Node* fast){
      int cnt =1;
      fast= fast->next;
      while(fast != slow){
          cnt++;
          fast = fast->next;
      }
      return cnt;
  }
    int lengthOfLoop(Node *head) {
        // Code here
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL) {
            slow= slow->next ;
            fast = fast->next->next;
            
            if(slow==fast) return findLen(slow,fast);
            
        }
        return 0;
    }
};

//TC:O(N)
// SC:O(1)

//Brute-force using hashing keeping a timer count revisiting a node subtract timers





