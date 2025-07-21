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

Node* removeHead(Node* head){
  if(head == NULL) return head;
  Node* temp = head;
  head = head->next;
  delete temp;
 return head;

}

Node* removeTail(Node* head){
 //empty or single element
  if(head== NULL || head->next == NULL) return NULL;

   Node* temp = head;
   while(temp->next->next != NULL){
        temp = temp->next;
   }
   //delete temp->next;
   free(temp->next); // that is last node
   temp->next= nullptr;
   
  return head;
}

Node* removeK(Node* head, int k){
  if(head == NULL ) return head;
  if( k==1){
    Node* temp = head;
    head = head->next;
    free (temp);
    return head;
  }
  int cnt=0;
  Node* temp = head;
  Node* prev = NULL;
  while( temp != NULL){
         cnt++;
         if(cnt == k){
          prev->next = prev->next->next;
          free(temp);
          break;
         }
         prev= temp;
         temp = temp->next;
  }
  return head;
}


Node* removeEle(Node* head, int ele){
  if(head == NULL ) return head;
  if( head->data == ele){
    Node* temp = head;
    head = head->next;
    free (temp);
    return head;
  }
 
  Node* temp = head;
  Node* prev = NULL;
  while( temp != NULL){
         
         if(temp->data == ele){
          prev->next = prev->next->next;
          free(temp);
          break;
         }
         prev= temp;
         temp = temp->next;
  }
  return head;
} 
int main(){
  vector<int> arr={4,2,10,3,9,25,21};
  Node* head = convertArray(arr);
  print(head);
//after deletion
  head = removeHead(head);
  print(head);
  head = removeTail(head);
  print(head);
  head = removeK(head,3); //O(K)
  print(head);
  head = removeEle(head,9 ); //O(K)
  print(head);
  return 0;
}