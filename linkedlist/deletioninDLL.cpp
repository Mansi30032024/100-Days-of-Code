#include<iostream>
#include<vector>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
  Node* back;

  public:
  Node(int data1, Node* next1, Node* back1){
    data = data1;
    next = next1;
    back = back1;
  }
  public:
  Node(int data1){
    data = data1;
    next = nullptr;
    back = nullptr;
  }

};
Node* convertArr2DLL(vector<int>& arr){
   Node* head = new Node(arr[0]);
   Node* prev = head;
   for(int i=1 ;i < arr.size(); i++){
   Node* temp = new Node(arr[i], nullptr, prev);
   prev->next= temp;
   prev = temp;
   }
   return head;
}
void print(Node* head){
  while(head != NULL){
         cout<<head->data<<" ";
         head = head->next;
  }
  cout<<endl;
}

Node* deleteHead(Node* head){
  if(head==NULL || head->next == NULL) return NULL;
  Node* prev=head;
  head = head->next;
  prev->next = nullptr;
  delete prev;
  return head;
}
Node* deleteTail(Node* head){
    if(head==NULL || head->next == NULL) return NULL;
 Node* tail = head;
 while(tail->next != NULL){
    tail = tail->next;
 } 
 Node* newTail =  tail->back;
newTail->next = nullptr;
newTail->back = nullptr;
delete tail;
     
  return head;
}
Node* removekthelement(Node* head, int k){
  if(head == NULL){ return NULL;} // empty
  int cnt=0;
  Node* kNode = head;
  while(kNode != NULL){
    cnt++;
    if(cnt == k) break;
    kNode = kNode->next;
  }
  Node* prev = kNode->back;
  Node* front = kNode->next;

  if(prev==NULL && front == NULL) { // single element 
     return NULL;
  }
  else if(prev == NULL){ // head
        return deleteHead(head);
  }
  else if(front==NULL){
    return deleteTail(head);
  }

  prev->next = front;
  front->back = prev;

  kNode->next = nullptr;
  kNode->back = nullptr;
  delete kNode;
  
  return head;
}
void deleteNode(Node* temp){
  Node* prev = temp->back;
  Node* front= temp->next;

  if(front== NULL){
    prev->next =nullptr;
    temp->back = nullptr;
    free(temp);
    return;
  }
  prev->next = front;
  front->back = prev;
  
  temp->next = temp->back = nullptr;
  free(temp);
}
int main(){
    vector<int> arr= {2,3,4,8,10,15};
    Node* head = convertArr2DLL(arr);
    print(head);
    head = deleteHead(head);
    print(head);
    head = deleteTail(head);
    print(head);
    head = removekthelement(head,3);
    print(head);

    deleteNode(head->next);// cannot delete head;
       print(head);
    return 0;
}