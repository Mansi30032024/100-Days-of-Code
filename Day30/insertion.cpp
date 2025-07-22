#include<iostream>
#include<vector>
using namespace std;

class Node{
  public:
  int data;
  Node* next;
 
  public: 
  Node(int data1, Node* next1){
    data = data1;
    next = next1;
  }
  Node(int data1){
    data = data1;
    next = nullptr;
  }
};
Node* convertArray(vector<int> & arr){
  Node* head = new Node(arr[0]);
  Node* mover = head;
  for(int i=1;i<arr.size();i++){
    Node* temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
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

Node*  insertHead(Node* head, int val ){
  // Node* temp = new Node(val, head); pointing to head
  // return temp;
   return new Node(val, head);
}
Node * insertTail(Node* head, int val){
  if(head == NULL){
    return new Node(val);
  }
  Node* temp = head;
  while(temp->next != NULL){
    temp = temp->next;
  }
  Node* newNode = new Node(val);
  temp->next = newNode;
  return head;
}
Node* insertPosition(Node* head, int ele, int k){
  if(head==NULL) {
    if(k==1) return new Node(ele);
    else return head;
  }
  if(k==1){
   return new Node(ele, head);
  }
  int cnt=0;
  Node* temp = head;
  while( temp != NULL){
    cnt++;
    if(cnt == k-1){
      Node* x = new Node(ele , temp->next);
      temp->next = x;
      break;
    }
    temp = temp->next;
  }
  return head;
}


Node* insertBeforeValue(Node* head, int el, int val){
  // value is present in linkedlist
  if(head==NULL) {
    return NULL;
  }
  if(head->data==val){
   return new Node(el, head);
  }
  
  Node* temp = head;
  while( temp->next != NULL){//stop at second last
    if(temp->next->data == val){
      Node* x = new Node(el , temp->next);
      temp->next = x;
      break;
    }
    temp = temp->next;
  }
  return head;
}
int main(){
  vector<int> arr={4,2,10,3,9,25,21};
  Node* head = convertArray(arr);
  print(head);
//after insertion
 head= insertHead(head,5);
  print(head);
head= insertTail(head,100);
  print(head);
head= insertPosition(head,90,3);
  print(head);
  head = insertBeforeValue(head, 87,10);
  print(head);
  return 0;

}