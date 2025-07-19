
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
int main(){
  vector<int> arr= {2,1,3,4,5};
  Node* y = new Node(arr[0]);
  
  cout<<y->data<<endl;
 
  return 0;
}
/*
#include<iostream>
#include<vector>

using namespace std;

struct Node{
  public: 
  int data;
  Node* next;

  public:
  Node(int data1, Node* next1){
    data = data1;
    next = next1;
  }
// we can have multiple constructor 
// we dont want pass nullptr every time we create a node
Node(int data1){
  data= data1;
  next=nullptr;
}
};
int main(){
  vector<int> arr= {2,1,3,4,5};
  // Node* y = new Node(arr[0], nullptr);
  Node* y = new Node(arr[0]);//automaticall assumes next is nullptr
  cout<<y<<endl;
  // for data retrieval 
  cout<<y->data<<endl;
  // Node y = Node(arr[0], nullptr);
  // cout<<y <<endl; // this will throw an error because y is a object not a pointer to memory location 
  //  you can either get data from this  or y.next
  // cout<<y.data<<endl;
  // cout<<y.next<<endl;
  return 0;
}
*/