
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
  data= data1;
  next=nullptr;
}
};
Node* convertArr(vector<int> &arr){
  Node* head = new Node(arr[0]);
  Node* mover = head;
  for(int i=1;i<arr.size();i++){
    Node* temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp; // had to move to next that actually is temp 
    //either you can mover = mover->next; or mover = temp;
  }
return head;
}
int lengthOfLL(Node* head){
  int cnt=0;
  Node* temp = head;
  while(temp){
    // cout<<temp->data<<" ";
    temp = temp->next;
    cnt++;
  }
  return cnt;
}
int checkIfPresent(Node*head, int val){
  Node* temp = head;
  while(temp){
    if(temp-> data == val) return 1;
    temp = temp->next;
  }
  return 0;
}
int main(){
  vector<int> arr = {2,1,3,4,5};
  Node* head = convertArr(arr); //O(n)
  cout<<head->data<<endl ;//will print 2
 

  //traversal in in LL O(n)
  Node* temp = head;
  while(temp){
    cout<<temp->data<<" ";
    temp = temp->next;
  }
  cout<<endl;
  //length of LL O(n)
  cout<<lengthOfLL(head)<<endl;

  //search in LL O(n)
  cout<<checkIfPresent(head, 3)<<endl;
  return 0;
}
