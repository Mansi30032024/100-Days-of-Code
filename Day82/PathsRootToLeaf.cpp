
class Solution {
public:
    void solve(TreeNode* root , string path, vector<string> &ans ){
        if(root==NULL){
            return ;
        }
       path += to_string(root->val); //curr node
      
       if(root->left == NULL && root->right ==NULL){//if leaf node
        ans.push_back(path);
        return ;
       }
       // continue the path until u get leaf 
        path += "->"; 
       solve(root->left, path,  ans);
       solve(root->right,path, ans);

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
       solve(root,"", ans);
       return ans;
    }
};