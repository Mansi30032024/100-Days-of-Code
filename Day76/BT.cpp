#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

struct Node{
  int data;
  Node* left;
  Node* right;
  Node(int val){
    data = val;
    left=NULL;
    right=NULL;
  }
};
/*RECURSIVE TRAVERSALS*/
// Pre-order Traversal: RootNode->Left->Right

void preOrder(Node* root){
  if(root ==NULL) return;
  cout<<root->data<<" " ;
  preOrder(root->left);
  preOrder(root->right);
}
//inOrder: LNR
void inOrder(Node* root){
  if(root ==NULL) return;
  inOrder(root->left);
  cout<<root->data<<" " ;
  inOrder(root->right);
}
//postOrder: LRN
void postOrder(Node* root){
  if(root ==NULL) return;
  postOrder(root->left);
  postOrder(root->right);
  cout<<root->data<<" " ;
}
//levelOrder:BFS
//using queue data structure nd storing level wise nodes in 2D vector (list of lists)
vector<vector<int>> levelOrder(Node* root){
  vector<vector<int>> ans;
  if(root==NULL) return ans;

  queue<Node*> q;
  q.push(root);

  while(!q.empty()){
    int size = q.size();
    vector<int> level;
    for(int i=0;i<size;i++){
      Node* node = q.front();//get the front node
      q.pop();

      if(node->left != NULL) q.push(node->left); //push left child
      if(node->right != NULL) q.push(node->right);
  
      level.push_back(node->data);//push node data to level vector , here level vector stores all nodes at current level
      
    }
    ans.push_back(level); //push level vector to ans vector

  }
  return ans;
}
/*ITERATIVE TRAVERSALS*/
//Iterative Pre-order Traversal: NLR
//using stack data structure
vector<int> iterativePreOrder(Node* root){
  vector<int> preOr;
 if(root == NULL ) return preOr;
 stack<Node*> st;
 st.push(root);
 while(!st.empty()){
  root = st.top();
  st.pop();
  preOr.push_back(root->data);
  //push right child first if exists
  if(root->right) st.push(root->right);
  //push left child if exists
  if(root->left) st.push(root->left);
 }
  return preOr;
}
//Iterative In-order Traversal: LNR
//using stack data structure
vector<int> iterativeInOrder(Node* root){
  vector<int> inOr;
  stack<Node*> st;
  Node* node = root;
  while(true){
    //reach the leftmost node of the curr node
    if(node != NULL){
      st.push(node);
      node = node->left;
    }
    else{
      if(st.empty() == true ) break;
      //curr must be NULL at this point
    node = st.top();
    st.pop();
    inOr.push_back( node->data);
    //we have visited the node and its left subtree. Now, it's right subtree's turn
    node = node->right;
    }
  }
  return inOr;
}
//Iterative Post-order Traversal: LRN
//using two stacks
vector<int> iterativePostOrder(Node* root){
  vector<int> postOr;
  if(root == NULL) return postOr;
  stack<Node*> st1, st2;
  st1.push(root);
  
  while(!st1.empty()){
    root = st1.top();
    st1.pop();
    st2.push(root);
    //push left and right children of removed node to stack1
    if(root->left) st1.push(root->left);
    if(root->right) st1.push(root->right);
  }
  //pop all elements from stack2 and add to postOr
  while(!st2.empty()){
   postOr.push_back(st2.top()->data);
    st2.pop();
    
  }
  return postOr;
}
//using single stack
vector<int> iterativePstOrder(Node* root){
  vector<int> postOr;
  if(root == NULL) return postOr;
  stack<Node*> st;
  Node* curr = root;
  while(curr != NULL || !st.empty()){
    //reach the leftmost node of the curr node
    if(curr != NULL){
      st.push(curr);
      curr = curr->left;
    }
    else{
      Node* temp = st.top()->right;
      //if right child is NULL, we can pop the node and add to postOr
      if(temp == NULL){
        temp = st.top();
        st.pop();
        postOr.push_back(temp->data);
        //check if the popped node is the right child of the top node. If yes, then pop the top node as well
        while(!st.empty() && temp == st.top()->right){
          temp = st.top();
          st.pop();
          postOr.push_back(temp->data);
        }
      }
      else{
        curr = temp; //move to right child
      }
    }
  }
  return postOr;
}
//ALL IN ONE PLACE using stack ( node, num)

vector<int> preInPost(Node* root){

  stack<pair<Node* , int>> st;
  st.push({root,1});
  vector<int> pre , in, post;
  if(root == NULL) return {};
  while(!st.empty()){
    auto it = st.top();
    st.pop();

    //for pre-order
    //increment 1 to 2
    //push the left side of tree
    if(it.second == 1){
      pre.push_back(it.first->data);
      it.second++;
      st.push(it);
      if(it.first->left != NULL){
        st.push({it.first->left,1});
      }
    }
    //for in-order
    //increment 2 to 3  
    //push right
    else if(it.second == 2){
      in.push_back(it.first->data);
      it.second++;
      st.push(it);
      if(it.first->right != NULL){
        st.push({it.first->right,1});
      }
    }
    //don't push it back again
    else{
      post.push_back(it.first->data);
  }
}
}
int main(){
  Node* root = new Node(1);
  root->left = new Node(2);
  root->right = new Node(3);
  root->left->left = new Node(4);
  root->left->right = new Node(5);

 cout<<"Pre-Order: ";
 preOrder(root);
  cout<<endl;
  cout<<"In-Order: ";
  inOrder(root);
  cout<<endl;     
  cout<<"Post-Order: ";
  postOrder(root);
cout<<endl;
  cout<<"Level-Order: ";
  vector<vector<int>> result = levelOrder(root);
  
/*
result = {
   {1},        // level 0
   {2, 3},     // level 1
   {4, 5}      // level 2
}
*/
  for(auto level : result){
    for(auto val : level){
        cout << val << " ";
    }
}
cout<<endl;

cout<<"Iterative Pre-Order: ";
 vector<int> preResult = iterativePreOrder(root);
  for(int val : preResult){ cout << val << " "; }
   cout<<endl;
  cout<<"Iterative In-Order: ";
  vector<int> inResult = iterativeInOrder(root);
    for(int val : inResult){ cout << val << " "; }
     cout<<endl;
  cout<<"Iterative Post-Order: ";
  vector<int> postResult = iterativePostOrder(root);
    for(int val : postResult){ cout << val << " "; }
     cout<<endl;

return 0;
}