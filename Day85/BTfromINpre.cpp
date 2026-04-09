
class Solution {
public:
   void createMapping( vector<int> inorder, map<int, int> &nodeToIndex , int n){
        for(int i =0;i<n;i++){
            nodeToIndex[inorder[i]] = i;
        }

   }
    TreeNode* solve(vector<int> inorder, vector<int> preorder, int &index, int inorderStart, int inorderEnd , int n  ,  map<int, int> &nodeToIndex ){
        if(index >= n ){ //preOrder  traverse completely
          return NULL;
        }
        if(inorderStart > inorderEnd){
            return NULL;
        }
        //get root
        int ele = preorder[index++];
        TreeNode* root  = new TreeNode(ele);
        int pos = nodeToIndex[ele];
    
         root->left = solve(inorder, preorder, index, inorderStart, pos-1, n , nodeToIndex);
         root->right = solve(inorder, preorder, index, pos+1, inorderEnd,  n , nodeToIndex );

       return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preOrderIndex =0;
        int n = inorder.size();
        map<int, int> nodeToIndex;
        createMapping(inorder,nodeToIndex, n  );

        TreeNode* ans = solve(inorder, preorder, preOrderIndex, 0 , n-1 , n,  nodeToIndex);
        return ans;
    }
};