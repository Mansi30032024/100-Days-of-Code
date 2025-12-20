
class Solution {
  
bool isLeaf(Node* node) {
    return (node->left == NULL && node->right == NULL);
}

    
    void addLeftBoundary(Node* root, vector<int> &res){
        Node* cur = root->left;
       while(cur){
           if(!isLeaf(cur)) res.push_back(cur->data);
           if(cur->left) cur = cur->left;
           else cur = cur->right;
       }
    }
     void addRightBoundary(Node* root, vector<int> &res){
        Node* cur = root->right;
        vector<int> temp;
       while(cur){
           if(!isLeaf(cur)) temp.push_back(cur->data);
           if(cur->right) cur = cur->right;
           else cur = cur->left;
       }
       for(int i = temp.size()-1; i>=0;--i){
           res.push_back(temp[i]);
       }
    }
    void addLeaves(Node* root, vector<int>& res){
        if(isLeaf(root)){
            res.push_back(root->data);
            return;
        }
        if(root->left) addLeaves(root->left, res);
        if(root->right) addLeaves(root->right, res);
    }
  public:
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> res;
        if(!root) return res;
        if(!isLeaf(root)) res.push_back(root->data);
        addLeftBoundary(root,res);
        addLeaves(root, res);
        addRightBoundary(root,res);
        return res;
        
    }
};
//TC:O(N) , SC:O(H) for recursion stack
//the approach is similar to level order traversal but we have to take care of direction while inserting nodes at each level
//left boundary (except leaves ),
// leaves, 
//right boundary(except leaves ) in reverse order
