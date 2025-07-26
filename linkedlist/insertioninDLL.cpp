#include<iostream>
#include<vector>
using namespace std;
//Doubly linked list

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
  Node(int data1){// automatically assign next, back to nullptr while initialize the value using the constructor
    data = data1;
    next = nullptr;
    back = nullptr;
  }

};
Node* convertAr(vector<int> & arr){
  int n = arr.size();
  Node* head = new Node(arr[0]);
  Node* prev = head;
  for(int i=1;i<n;i++){
    Node* temp = new Node(arr[i], nullptr, prev);
    prev->next = temp;
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
//BEFORE 
Node* insertBeforeHead(Node* head, int val){
  Node* newHead = new Node(val, head, nullptr);
  head->back = newHead;

  return newHead;
}
Node* insertBeforeTail(Node* head, int val){
  if(head->next == NULL) {return insertBeforeHead(head, val);}
  Node* tail  = head;
  while(tail->next != NULL){
    tail = tail->next;
  }
  Node* prev = tail->back;
  Node* newNode = new Node(val, tail, prev);
  prev->next = newNode;
  tail->back = newNode;

  return head;
}
Node* insertBeforekth(Node* head, int k,int val){
  if (k==1){ return insertBeforeHead(head, val);}
  Node* temp = head;
  int cnt=0;
  while(temp != NULL){
    cnt++;
    if(cnt == k) break;
    temp = temp->next;
  }
  Node* prev = temp->back;
  Node* newNode = new Node(val, temp, prev);
  prev->next = newNode;
  return head;
}
void insertBeforeNode(Node* node, int val){
  Node*  prev = node->back;
  Node* newNode = new Node(val,node,prev);
  prev->next = newNode;
  node->back = newNode;
}
int main(){

  vector<int> arr ={2,3,4,5,9};
  Node* head = convertAr(arr);
  print(head);
 
  head = insertBeforeHead(head, 7);
    print(head);
  head = insertBeforeTail(head, 8);
    print(head);;
  head = insertBeforekth(head, 7,90);
    print(head);
   insertBeforeNode(head->next, 70);
    print(head);
  return 0;
}