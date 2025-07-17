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
     next= next1;
  }
  public:
  Node(int data1){
     data = data1;            
      next= nullptr;
  }
  // this constructor initializes the data and sets next to nullptr.
};
int main(){

  #ifndef ONLINE_JUDGE
  freopen ("in.txt","r",stdin);
  freopen ("out.txt","w",stdout);
  #endif

  vector<int> arr ={1, 2, 3, 4, 5};
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
     next= next1;
  }
};
int main(){

  #ifndef ONLINE_JUDGE
  freopen ("in.txt","r",stdin);
  freopen ("out.txt","w",stdout);
  #endif

  vector<int> arr ={1, 2, 3, 4, 5};
  Node* y = new Node(arr[0], nullptr);
  cout<<y<<endl;
  
  // Node y =  Node(arr[0], nullptr);  now this line will not compile because 'new' returns a pointer, not an object.
  //this is now an object of type Node, not a pointer to Node.
  //you can either retrieve data from the object using y.data, but not y->data since y is not a pointer.
  // you can also use y.next this will return nullptr.

  //  Node y =  Node(arr[0], nullptr); 
  cout<<y.data<<endl; //1
  cout<<y.next<<endl; //0 (nullptr)
  return 0;

}*/
