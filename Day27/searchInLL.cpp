
#include<iostream>
#include<vector>
using namespace std;
class Node{
  public:
    int data;
    Node* next ;

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
int searchInLinkedList(Node*head, int k) {
    Node* temp = head;
    while(temp){
        if(temp->data == k){
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
int main(){
  vector<int> arr = {1, 2, 3, 4, 5};

  Node* head = new Node(arr[0]);
  Node* curr = head;

  for(int i = 1; i < arr.size(); i++){
      curr->next = new Node(arr[i]);
      curr = curr->next;
  }

  cout << searchInLinkedList(head, 4); 
  return 0;
}