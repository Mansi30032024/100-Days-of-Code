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
Node* deleteHead(Node* head){
  Node* prev=head;
  head = head->next;
  prev->next = nullptr;
  delete prev;
  return head;
}
Node* deleteTail(Node* head){
 Node* prev = head;
 while(prev->next->next != NULL){
    prev = prev->next;
 } 
 prev->next->back = nullptr;
 
      free(prev->next);

      
  return head;
}
int main(){

  vector<int> arr ={2,3,4,5,9};
  Node* head = convertAr(arr);
  print(head);
  head = deleteHead(head);
  print(head);

  head = deleteTail(head);
  print(head);
  return 0;
}