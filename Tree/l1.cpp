#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
  public:
  int data;
  node* left;
  node* right;

  node(int d){
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

//  build tree
node* buildTree(node* root){
   cout<<"Enter the data: "<<endl;
 int data;
 cin>>data;
  root = new node(data);
  if(data==-1){
    return NULL;
  }
  cout<< " Enter data to be inserted in the left of "<<data<<endl;
  root->left = buildTree(root->left);

  cout<< " Enter data to be inserted in the right of "<<data<<endl;
  root->right = buildTree(root->right);

  return root;
}
//level ordertraversal
void levelOrder(node* root ){
  queue<node*> q;
  q.push(root);
   q.push(NULL); //separator for levels
  while(!q.empty()){
    node* temp = q.front();
    q.pop();

    if(temp ==NULL){
      cout<<endl;
      if(!q.empty()){//still have some nodes to process
        q.push(NULL); //add separator for next level
      }
    }
    else{
     cout<< temp->data<<" ";
    if(temp->left){
      q.push(temp->left);
    }
    if(temp->right){
      q.push(temp->right);
    }
    }
  }
}
//reverse level order traversal
void reverseLevelOrder(node* root){
  queue<node*> q;
  stack<node*> s;
  q.push(root);
  while(!q.empty()){
    node* temp = q.front();
    q.pop();
    s.push(temp);
    if(temp->right){
      q.push(temp->right);
    }
    if(temp->left){
      q.push(temp->left);
    }
  }
  while(!s.empty()){
    node* temp = s.top();
    s.pop();
    cout<<temp->data<<" ";
  }
}

//inorder traversal             L N R
void inorder(node* root){
  //base case
  if(root == NULL){
    return ;
  }
  inorder(root->left);
  cout<<root->data <<" ";
  inorder(root->right);
}

//postorder traversal             L  R N 
void postorder(node* root){
  //base case
  if(root == NULL){
    return ;
  }
  postorder(root->left);
  postorder(root->right);
  cout<<root->data <<" ";
}

//preorder traversal            N  L  R 
void preorder(node* root){
  //base case
  if(root == NULL){
    return ;
  }
   cout<<root->data <<" ";
  preorder(root->left);
  preorder(root->right);
 
}

//build tree from level order
void buildFromLevelOrder(node*  & root){
  queue<node*> q;
  cout<<"Enter data for root: "<<endl;
  int data; 
  cin>>data;
  root  = new node(data);
  q.push(root);

  while(!q.empty()){
    node* temp = q.front();
    q.pop();

    cout<<"Enter left node for: "<< temp->data <<endl;
    int ld;
    cin>>ld;

    if(ld !=-1){
      temp->left = new node(ld);
      q.push(temp->left);
    }

     cout<<"Enter right node for: "<< temp->data <<endl;
    int rd;
    cin>>rd;

    if(rd !=-1){
      temp->right = new node(rd);
      q.push(temp->right);
    }
  }
}

int main(){
  node* root = NULL;
  buildFromLevelOrder(root);
//   root = buildTree(root);
  cout<<"Level order traversal is: "<<endl;
  levelOrder(root);
  cout<<endl;
//   cout<<"Reverse level order traversal is: "<<endl;
//   reverseLevelOrder(root);
//  cout<<endl;
//   cout<<"Inorder Traversal: "<<endl;
//   inorder(root);
//  cout<<endl;
//    cout<<"Postorder Traversal: "<<endl;
//   postorder(root);
//  cout<<endl;
//    cout<<"Preorder Traversal: "<<endl;
//   preorder(root);
//    cout<<endl;
  return 0;

}