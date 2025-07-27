/*
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    // empty or single element
   if(!head || !head->next){ return head;}
   Node* zeroHead = new Node(-1);
   Node* oneHead = new Node(-1);
   Node* twoHead = new Node(-1);

   Node *zero = zeroHead;
   Node *one = oneHead;
   Node *two = twoHead;

   Node *temp = head;
   while(temp){
       //segregating nodes 0's, 1's, 2's in L0, L1,L2
       if(temp->data == 0) {
           zero->next = temp;
           zero =  temp;
       }
       else if(temp->data == 1){
           one->next = temp;
           one = temp;
       }
       else {
           two->next = temp;
           two = temp;
       }
       temp = temp->next;
   }
  //connecting zero , one, two 
  zero->next = (oneHead->next) ? (oneHead->next) : (twoHead->next);
  one->next = twoHead->next;
  two->next =  NULL;
   
   Node* newHead = zeroHead->next;
   delete zeroHead;
   delete oneHead;
   delete twoHead;

   return newHead;
   //Tc: O(N)
   //SC: O(1)
}